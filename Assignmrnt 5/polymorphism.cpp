/*Polymorphism is one of the four main principles of Object-Oriented Programming (OOP). The word means “many forms.”
In C++, polymorphism allows the same function name, operator, or interface to behave differently depending on the situation.
For example, imagine a biomedical engineering system that handles different medical devices. A heart monitor, an X-ray machine,
 and an ultrasound machine may all have a function called start(), but each device starts in a different way.*/


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

/*Key Elements of Polymorphism Code

The polymorphism example demonstrates how a single interface (Shape) can trigger different behaviors depending on the actual object being pointed to at runtime.
• The virtual Keyword (virtual void draw()): This is the foundation of runtime polymorphism in C++. By marking draw() as virtual in the base class, you tell the compiler to bypass "early binding" (choosing the function based on the pointer type) and instead use "late binding" (choosing the function based on the actual object type at runtime).
• The override Keyword (void draw() override): Used in Circle and Square, this explicit identifier tells the compiler that these classes intend to replace the base class's draw() method. It acts as a safety net; if you make a typo in the function signature, the compiler will throw an error instead of silently failing.
• Base Class Pointer Array (Shape* shapes[2]): This is where polymorphism becomes powerful. We create an array of Shape pointers, but assign them to point to a Circle object and a Square object.
• Dynamic Binding (shapes[i]->draw()): When the loop runs, 
the exact same instruction (shapes[i]->draw()) executes twice. However, because of the virtual table mechanism, the program dynamically resolves the first call to Circle::draw() and the second call to Square::draw().*/

