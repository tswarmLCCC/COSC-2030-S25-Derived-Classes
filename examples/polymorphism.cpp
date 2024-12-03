#include <iostream>

class Animal {
public:
  virtual void speak() = 0; // Pure virtual function for polymorphism
};

class Dog : public Animal {
public:
  void speak() override {
    std::cout << "Woof!" << std::endl;
  }
};

class Cat : public Animal {
public:
  void speak() override {
    std::cout << "Meow!" << std::endl;
  }
};

int main() {
  Animal* animal1 = new Dog();
  Animal* animal2 = new Cat();

  // Polymorphism in action - virtual function call based on object type at runtime
  animal1->speak();  // Output: Woof!
  animal2->speak();  // Output: Meow!

  delete animal1;
  delete animal2;

  return 0;
}
