#include <iostream>
using namespace std;
class Employee {
public:
    virtual double calculatePay() = 0; 
    virtual ~Employee() {} 
};
class Manager : public Employee {
private:
    double salary;
    double bonus;
public:
    Manager(double sal, double bon) : salary(sal), bonus(bon) {}
    
    double calculatePay() override {
        return salary + bonus;
    }
};

// Derived class Engineer
class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    Engineer(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}
    
    double calculatePay() override {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    Employee* emp1 = new Manager(5000, 1500);
    Employee* emp2 = new Engineer(50, 160);
    
    cout << "Manager's Pay: $" << emp1->calculatePay() << endl;
    cout << "Engineer's Pay: $" << emp2->calculatePay() << endl;
    
    delete emp1; 
    delete emp2; 

    return 0;
}
