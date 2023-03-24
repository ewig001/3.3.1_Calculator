#include <iostream>

class Calculator {

public:
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            std::cout << "Неверный ввод!" << std::endl;
            return false;
        }
    };
   
    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            std::cout << "Неверный ввод!" << std::endl;
            return false;
        }
    };

    void print_result() {
        std::cout << "num1 + num2 = " << add() << std::endl << "num1 - num2 = " << subtract_1_2() << std::endl << "num2 - num1 = " << subtract_2_1() << std::endl << "num1 * num2 = " << multiply() << std::endl << "num1 / num2 = " << divide_1_2() << std::endl << "num2 / num1 = " << divide_2_1() << std::endl;
    };

private:
    double num1 = 1;
    double num2 = 1;
    
    double add() {
        return (num1 + num2);
    };
    
    double multiply() {
        return (num1 * num2);
    };
    
    double subtract_1_2() {
        return (num1 - num2);
    };
    
    double subtract_2_1() {
        return (num2 - num1);
    };
    
    double divide_1_2() {
        return (num1 / num2);
    };
    
    double divide_2_1() {
        return (num2 / num1);
    };

};

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Russian");

    Calculator calculator;

    while (true) {
        double num1 = 0, num2 = 0;
        bool b = false;

        while (b != true) {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            b = calculator.set_num1(num1);
        };

        b = false;

        while (b != true) {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            b = calculator.set_num2(num2);
        };
        calculator.print_result();
    }

    return 0;
}