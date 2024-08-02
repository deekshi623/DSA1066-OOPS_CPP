#include <iostream>

class Number {
private:
    int value;

public:

    Number(int v) : value(v) {}

    friend int sum(const Number &n1, const Number &n2);
};

int sum(const Number &n1, const Number &n2) {
    return n1.value + n2.value;
}

int main() {
    
    Number num1(10);
    Number num2(20);

    
    int result = sum(num1, num2);

    std::cout << "Sum of num1 and num2 is: " << result << std::endl;

    return 0;
}
