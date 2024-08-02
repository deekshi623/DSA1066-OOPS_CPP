#include <iostream>
#include <stdexcept>
void checkValue(int num) {
    if (num < 0) {
        throw std::runtime_error("Number is negative");
    } else if (num == 0) {
        throw std::invalid_argument("Number is zero");
    } else if (num > 100) {
        throw std::out_of_range("Number is too large");
    }
}
int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    try {
        checkValue(number);
        std::cout << "Number is within the valid range." << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Runtime error: " << e.what() << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Standard exception: " << e.what() << std::endl;
    }

    return 0;
}
