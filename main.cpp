#include <iostream>
#include <vector>
/*
 * Auther: Aman Arabzadeh
 * Date: 2023-07-07
 *  examples of loops in C++ to help beginners understand how loops are used.
 */

int main() {
    // For Loop
    // Iterates a block of code for a fixed number of times
    // Example: Print numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // While Loop
    // Iterates a block of code as long as a condition is true
    // Example: Print even numbers from 2 to 10
    int num = 2;
    while (num <= 10) {
        std::cout << num << " ";
        num += 2;
    }
    std::cout << std::endl;

    // Do-While Loop
    // Executes a block of code at least once and then repeats as long as a condition is true
    // Example: Read numbers from the user until a negative number is entered
    int input;
    do {
        std::cout << "Enter a number (negative to exit): ";
        std::cin >> input;
        std::cout << "You entered: " << input << std::endl;
    } while (input >= 0);

    // Range-based For Loop (C++11 and above)
    // Iterates over elements in a sequence (e.g., array, container) without using an explicit index
    // Example: Print elements of an array
    int numbers[] = {1, 2, 3, 4, 5};
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
// Nested Loops - Print a pattern
    std::cout << "Nested Loops - Print a pattern: " << std::endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    // Loop Control Statements - Skip printing even numbers
    std::cout << "Loop Control Statements - Skip printing even numbers: ";
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Loop with Vector - Print elements of a vector
    std::cout << "Loop with Vector - Print elements of a vector: ";
    std::vector<int> vec = {10, 20, 30, 40, 50};
    for (int value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Performance Comparison - Sum of numbers using different loop types
    std::cout << "Performance Comparison - Sum of numbers using different loop types: ";
    long   long unsigned sum = 0;
    const int N = 1000000;

    // For Loop
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    std::cout << "Sum using For Loop: " << sum << std::endl;

    sum = 0;

    // While Loop, we  want to find the sum of numbers from 1 to N
    int i = 1;
    while (i <= N) {
        sum += i;
        i++;
    }
    std::cout << "Sum using While Loop: " << sum << std::endl;



// Loop to display a menu and process user's choice
/*
 * This code presents a menu to the user and allows them to select different options (1-5) to perform various arithmetic operations (addition, multiplication, subtraction, division) or exit the program.
 * The switch statement handles the user's choice and executes the corresponding code block for the chosen operation.
 * If an invalid choice is entered, a default case is triggered to inform the user and prompt them to try again.
 * The loop continues until the user chooses to exit the program (choice 5).
 *
 */
    int choice;
    do {
        // Display menu options
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Add numbers" << std::endl;         // Perform addition
        std::cout << "2. Multiply numbers" << std::endl;    // Perform multiplication
        std::cout << "3. Subtract numbers" << std::endl;    // Perform subtraction
        std::cout << "4. Divide numbers" << std::endl;      // Perform division
        std::cout << "5. Exit" << std::endl;                // Exit the program
        std::cout << "Enter your choice: ";

        // Read user's choice
        std::cin >> choice;

        // Process user's choice using a switch statement
        switch (choice) {
            case 1: {
                // Addition
                int num1, num2;
                std::cout << "Enter two numbers to add: ";
                std::cin >> num1 >> num2;
                int sum = num1 + num2;
                std::cout << "Sum: " << sum << std::endl;
                break;
            }
            case 2: {
                // Multiplication
                int num1, num2;
                std::cout << "Enter two numbers to multiply: ";
                std::cin >> num1 >> num2;
                int product = num1 * num2;
                std::cout << "Product: " << product << std::endl;
                break;
            }
            case 3: {
                // Subtraction
                int num1, num2;
                std::cout << "Enter two numbers to subtract: ";
                std::cin >> num1 >> num2;
                int difference = num1 - num2;
                std::cout << "Difference: " << difference << std::endl;
                break;
            }
            case 4: {
                // Division
                int num1, num2;
                std::cout << "Enter two numbers to divide: ";
                std::cin >> num1 >> num2;
                if (num2 != 0) {
                    double quotient = static_cast<double>(num1) / num2;
                    std::cout << "Quotient: " << quotient << std::endl;
                } else {
                    std::cout << "Error: Cannot divide by zero." << std::endl;
                }
                break;
            }
            case 5:
                // Exit the program
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                // Invalid choice
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }

        std::cout << std::endl;

    } while (choice != 5);

    ///////////////////////

    // Nested Loops - Print a pattern in reverse
    std::cout << "Nested Loops - Print a pattern in reverse: " << std::endl;
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    // Labeled Loop - Use a label to break out of nested loops
    std::cout << "Labeled Loop - Breaking out of nested loops: " << std::endl;

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == 2 && j == 2) {
                // Break out of both loops when i=2 and j=2
                break;
            }
            std::cout << "(" << i << "," << j << ") ";
        }
    }
    std::cout << std::endl;

    // Loop Control Statements - Using 'continue' to skip specific iterations
    std::cout << "Loop Control Statements - Using 'continue' to skip specific iterations: ";
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            // Skip printing 3
            continue;
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Loop Algorithms

    // Searching for an element in a vector, linear search
    std::cout << "Loop Algorithm - Searching for an element in a vector: ";
    std::vector<int> numbers1 = {10, 20, 30, 40, 50};
    int target = 300;
    bool found = false;
    for (int number : numbers1) {
        if (number == target) {
            found = true;
            break;
        }
    }
    if (found) {
        std::cout << "Element found!" << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }

    // Sorting elements in a vector, using Bubble sort
    std::cout << "Loop Algorithm - Sorting elements in a vector: ";
    std::vector<int> values = {5, 2, 7, 1, 9};
    for (int i = 0; i < values.size(); i++) {
        for (int j = i + 1; j < values.size(); j++) {
            if (values[i] > values[j]) {
                // Swap elements if out of order
                int temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }
    for (int value : values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
