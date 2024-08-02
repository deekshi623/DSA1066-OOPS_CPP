#include <iostream>
#include <string>
class Person {
public:
    virtual void work() const = 0;
};
class Employee : public Person {
public:
    void work() const override {
        std::cout << "Employee is working on tasks assigned by the manager." << std::endl;
    }
};
class Manager : public Person {
public:
    void work() const override {
        std::cout << "Manager is overseeing the team's progress and assigning tasks." << std::endl;
    }
};
int main() {
    Person* employee = new Employee();
    Person* manager = new Manager();
    employee->work();
    manager->work();
    delete employee;
    delete manager;
    return 0;
}
