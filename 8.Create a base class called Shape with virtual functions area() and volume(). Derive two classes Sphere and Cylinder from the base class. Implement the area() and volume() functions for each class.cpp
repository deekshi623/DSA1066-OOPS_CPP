#include <iostream>
#include <cmath>
class Shape {
public:
    virtual double area() const = 0;
    virtual double volume() const = 0;
};
class Sphere : public Shape {
private:
    double radius;
public:
    Sphere(double r) : radius(r) {}
    double area() const override {
        return 4 * M_PI * radius * radius;
    }
    double volume() const override {
        return (4.0 / 3) * M_PI * radius * radius * radius;
    }
};
class Cylinder : public Shape {
private:
    double radius;
    double height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}
    double area() const override {
        return 2 * M_PI * radius * (radius + height);
    }
    double volume() const override {
        return M_PI * radius * radius * height;
    }
};

int main() {
    Shape* sphere = new Sphere(5);
    Shape* cylinder = new Cylinder(3, 7);

    std::cout << "Sphere area: " << sphere->area() << std::endl;
    std::cout << "Sphere volume: " << sphere->volume() << std::endl;

    std::cout << "Cylinder area: " << cylinder->area() << std::endl;
    std::cout << "Cylinder volume: " << cylinder->volume() << std::endl;

    delete sphere;
    delete cylinder;

    return 0;
}
