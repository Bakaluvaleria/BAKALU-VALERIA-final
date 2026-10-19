INHERITANCE
Inheritance is a core concept in Object-Oriented Programming (OOP) that allows a new class (called the derived or child class) to adopt the attributes and methods of an existing class (called the base or parent class).

What Inheritance Does

• Promotes Code Reusability: You can reuse code from an existing class without rewriting it, saving time and reducing errors.
• Establishes a Hierarchy: It models real-world "is-a" relationships (e.g., a Car is a Vehicle, a Dog is an Animal).
• Enables Polymorphism: It allows a derived class to override parent methods to implement specific behaviors while maintaining a uniform interface.

 EXAMPLE OF A CODE 
 #include <iostream>
#include <string>

// Base Class (Parent)
class Animal {
protected:
    std::string name;

public:
    Animal(std::string animName) : name(animName) {}

    void eat() {
        std::cout << name << " is eating." << std::endl;
    }
};

// Derived Class (Child) inheriting publicly from Animal
class Dog : public Animal {
public:
    // Constructor passes the name to the Parent class constructor
    Dog(std::string dogName) : Animal(dogName) {}

    void bark() {
        std::cout << name << " says: Woof! Woof!" << std::endl;
    }
};

int main() {
    // Create an object of the derived class
    Dog myDog("Buddy");

    // Call a method from the Base class (Reusability)
    myDog.eat();

    // Call a method from the Derived class
    myDog.bark();

    return 0;
}


Key Elements of the Code:

• public Animal: This syntax means Dog inherits from Animal publicly. Public members of Animal remain public in Dog.
• protected Access Modifier: The name variable is protected. This means it cannot be accessed outside the class, but it can be accessed by derived classes like Dog.
• Constructor Chaining: The Dog constructor uses an initializer list (: Animal(dogName)) to call the Animal constructor first, ensuring the parent properties are initialized correctly.
