/*The program begins with #include <iostream>,
 which allows the program to perform input and output operations, such as displaying messages on the screen. The statement using namespace std; allows us to use standard C++ functions like cout and endl without writing std:: before them.
The program defines three classes: A, B, and C. Class A is the base class, and it contains a public function called showA(), which displays the message “Class A”. The keyword public allows the function to be accessed from outside the class.
Class B inherits publicly from class A using class B : public A. It contains its own function, showB(), which displays “Class B”. Since B inherits from A, it can also access the public members inherited from A.
*/



#include <iostream>
using namespace std;

// Level 1: Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Level 2: Derived from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Level 3: Derived from Dog
class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy is weeping." << endl;
    }
};

int main() {
    Puppy myPuppy;
    
    myPuppy.eat();  // Inherited from Animal (Base)
    myPuppy.bark(); // Inherited from Dog (Intermediate)
    myPuppy.weep(); // Defined in Puppy (Most derived)
    
    return 0;
}

/*The program begins with #include <iostream>, which allows the program to perform input and output operations, such as displaying messages on the screen. The statement using namespace std; allows us to use standard C++ functions like cout and endl without writing std:: before them.
The program defines three classes: A, B, and C. Class A is the base class, and it contains a public function called showA(), which displays the message “Class A”. The keyword public allows the function to be accessed from outside the class.
Class B inherits publicly from class A using class B : public A. It contains its own function, showB(), which displays “Class B”. Since B inherits from A, it can also access the public members inherited from A.
Class C inherits publicly from class B using class C : public B. It contains a function called showC(), which displays “Class C”. Because class C inherits from B, and B inherits from A, class C can access the public functions from all three classes. This forms a chain of inheritance, which is known as multilevel inheritance.
The main() function is where program execution begins. Inside it, C obj; creates an object named obj of class C. The statements obj.showA();, obj.showB();, and obj.showC();
 call the functions from classes A, B, and C, respectively. The dot operator is used to access the functions through the object. Finally, return 0; indicates that the program has executed successfully.
When the program runs, it displays “Class A”, “Class B”, and “Class C” on separate lines. This demonstrates how multilevel inheritance allows a class to access public members passed down through an inheritance chain.*/