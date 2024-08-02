#include <iostream>

int main() {
    int number, sum = 0, divisor = 1;

    std::cout << "Enter a number: ";
    std::cin >> number;

    while (divisor <= number / 2) {
        if (number % divisor == 0) {
            sum += divisor;
        }
        ++divisor;
    }
 
    if (sum == number && number != 0) {
        std::cout << number << " is a perfect number." << std::endl;
    } else {
        std::cout << number << " is not a perfect number." << std::endl;
    }

    return 0;
}
