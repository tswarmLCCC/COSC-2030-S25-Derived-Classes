#include <iostream>
#include <cmath>

const double PI = 3.14159;

// Base class Shape
class Shape {
public:
    // These are a key feature.  Notice we don't acutally build anything here.  They are really just 'promises' that they will be impliment in non-virtual derived classes.
    //  They allow for all of these 'real' classes to be used as type 'shape'.  This is the essence of polymorphism!
  virtual double getArea() const = 0;
  virtual double getPerimeter() const = 0;
  virtual std::string getType() const = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
  double radius;

public:
  Circle(double radius) : radius(radius) {}
  double getArea() const override { return PI * radius * radius; }
  double getPerimeter() const override { return 2 * PI * radius; }  //notice the override keyword here!  These instruct that we are replacing the virtual function (or even a real one) from the base class
  std::string getType() const override { return "Circle"; }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
  double width;
  double height;

public:
  Rectangle(double width, double height) : width(width), height(height) {}
  double getArea() const override { return width * height; }
  double getPerimeter() const override { return 2 * (width + height); }
  std::string getType() const override { return "Rectangle"; }
};

// Derived class Triangle (assuming right triangle for simplicity)
class Triangle : public Shape {
private:
  double base;
  double height;

public:
  Triangle(double base, double height) : base(base), height(height) {}
  double getArea() const override { return 0.5 * base * height; }
  double getPerimeter() const override { return base + height + std::hypot(base, height); }
  std::string getType() const override { return "Triangle"; }
};

int main() {
  // Array of shape pointers (polymorphism)
  Shape* shapes[3];
  shapes[0] = new Circle(5.0);
  shapes[1] = new Rectangle(4.0, 3.0);
  shapes[2] = new Triangle(6.0, 8.0);

  // Calculate and print properties for each shape
  for (int i = 0; i < 3; ++i) {
    std::cout << "Shape: " << shapes[i]->getType() << std::endl;
    std::cout << "  Area: " << shapes[i]->getArea() << std::endl;
    std::cout << "  Perimeter: " << shapes[i]->getPerimeter() << std::endl;
  }

  // Deallocate memory (important for pointers)
  for (int i = 0; i < 3; ++i) {
    delete shapes[i];
  }

  return 0;
}
