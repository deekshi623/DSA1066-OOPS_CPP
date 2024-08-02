#include <iostream>

int main() {
    int number, sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }
    if (sum == number && number != 0) {
        std::cout << number << " is a perfect number." << std::endl;
    } else {
        std::cout << number << " is not a perfect number." << std::endl;
    }

    return 0;
}
