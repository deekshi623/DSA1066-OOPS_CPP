#include <iostream>
int divide(int num1, int num2) {
    if (num2 == 0) {
        throw "Division by zero is not allowed"; 
    }
    return num1 / num2;
}

int main() {
    try {
        int num1 = 10;
        int num2 = 0;
        int result = divide(num1, num2);
        std::cout << "Result: " << result << std::endl;
    } catch (const char* exception) {
        std::cerr << "Error: " << exception << std::endl;
    }
    return 0;
}
