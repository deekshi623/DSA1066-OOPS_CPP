#include <iostream>
#include <stdexcept>

class CustomException : public std::exception {
private:
    std::string message;

public:
    CustomException(const std::string& msg) : message(msg);
    const char* what()const noexcept override {
        return message.c_str();
    }
};
void functionThatThrows() {
    throw CustomException("A custom exception occurred in functionThatThrows");
}
int main() {
    try {
        functionThatThrows();
    } catch (const CustomException& e) {
        std::cerr << "Caught a custom exception: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught a standard exception: " << e.what() << std::endl;
    }
    std::cout << "Program continues after handling the custom exception." << std::endl;
    return 0;
}
