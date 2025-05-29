//Here’s the C++ implementation of the "Shape Area Calculator Using Inheritance" task described in your imag

#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
public:
    virtual void calculateArea() {
        cout << "Area not defined for generic shape." << endl;
    }
};

// Circle class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void calculateArea() override {
        double area = M_PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

// Rectangle class
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void calculateArea() override {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

// Triangle class
class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    void calculateArea() override {
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    Shape* s = new Shape();
    Shape* c = new Circle(5.0);
    Shape* r = new Rectangle(4.0, 6.0);
    Shape* t = new Triangle(3.0, 7.0);

    s->calculateArea();
    c->calculateArea();
    r->calculateArea();
    t->calculateArea();

    delete s;
    delete c;
    delete r;
    delete t;

    return 0;
}