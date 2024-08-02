#include <iostream>
class Animal {
public:
    virtual void move() const = 0; 
    virtual ~Animal() = default;
};

class Bird : public Animal {
public:
    void move() const override {
        std::cout << "The bird flies." << std::endl;
    }
};
class Fish : public Animal {
public:
    void move() const override {
        std::cout << "The fish swims." << std::endl;
    }
};

int main() {
    Animal* bird = new Bird();
    Animal* fish = new Fish();
    bird->move();
    fish->move();
    delete bird;
    delete fish;
    return 0;
}
