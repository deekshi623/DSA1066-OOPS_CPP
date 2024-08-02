#include <iostream>
#include <stdexcept>

class ResourceHandler {
public:
    ResourceHandler() {
        std::cout << "Resource acquired." << std::endl;
    }

    ~ResourceHandler() {
        std::cout << "Resource released." << std::endl;
    }
};

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return numerator / denominator;
}

int main() {
    double num1, num2;
    std::cout << "Enter the numerator: ";
    std::cin >> num1;
    std::cout << "Enter the denominator: ";
    std::cin >> num2;
    {
        ResourceHandler resource; 

        try {
            double result = divide(num1, num2);
            std::cout << "Result: " << result << std::endl;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        } catch (...) {
            std::cerr << "An unexpected error occurred." << std::endl;
        }
    } 

    return 0;
}
