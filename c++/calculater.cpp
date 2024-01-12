#include <iostream>

int main() {
    char operation;
    double num1, num2, result;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero is not allowed.";
                return 1;  
            }
            break;
        default:
            std::cout << "Error: Invalid operator.";
            return 1; 
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
