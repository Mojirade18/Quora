#include <iostream>

// Function to add two numbers
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to subtract two numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to divide two numbers
double divide(double num1, double num2) {
    if (num2 == 0) {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
        exit(1);
    }
    return num1 / num2;
}

int main() {
    double num1, num2;
    char operation;

    // Ask the user for the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Ask the user for the operation
    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;

    // Ask the user for the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform the operation
    switch (operation) {
        case '+':
            std::cout << "Result: " << add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << subtract(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << multiply(num1, num2) << std::endl;
            break;
        case '/':
            std::cout << "Result: " << divide(num1, num2) << std::endl;
            break;
        default:
            std::cerr << "Error: Invalid operation." << std::endl;
            break;
    }

    return 0;
}