#include <iostream>
class Person {
public:
    virtual void greet() const = 0;
    virtual ~Person() = default; 
};
class Student : public Person {
public:
    void greet() const override {
        std::cout << "Hello, I am a student." << std::endl;
    }
};
class Teacher : public Person {
public:
    void greet() const override {
        std::cout << "Hello, I am a teacher." << std::endl;
    }
};

int main() {
    Person* student = new Student();
    Person* teacher = new Teacher();
    student->greet();
    teacher->greet();
    delete student;
    delete teacher;

    return 0;
}
