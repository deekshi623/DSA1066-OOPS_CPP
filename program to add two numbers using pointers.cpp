#include <iostream>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

   
    ptr1 = &num1;
    ptr2 = &num2;

   
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

   
    sum = *ptr1 + *ptr2;

  
    std::cout << "Sum of " << *ptr1 << " and " << *ptr2 << " is: " << sum << std::endl;

    return 0;
}
