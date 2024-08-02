#include <iostream>
using namespace std;
class Animal {
public:
    virtual void eat() = 0; 
    virtual ~Animal() {} 
};
class Herbivore : public Animal {
public:
    void eat() override {
        cout << "Herbivore is eating plants." << endl;
    }
};

class Carnivore : public Animal {
public:
    void eat() override {
        cout << "Carnivore is eating meat." << endl;
    }
};

int main() {
    Animal* herb = new Herbivore();
    Animal* carn = new Carnivore();
    
    herb->eat();
    carn->eat();
    
    delete herb; 
    delete carn; 

    return 0;
}
