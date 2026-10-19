#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // Setters
    void setWidth(double w) {
        width = w;
    }

    void setLength(double l) {
        length = l;
    }

    // Getters
    double getWidth() {
        return width;
    }

    double getLength() {
        return length;
    }

    // Calculations
    double calculateArea() {
        return width * length;
    }

    double calculatePerimeter() {
        return 2 * (width + length);
    }
};

int main() {
    // Example 1
    Rectangle rect1;
    rect1.setWidth(5);
    rect1.setLength(10);

    cout << "Rectangle 1" << endl;
    cout << "Width: " << rect1.getWidth() << endl;
    cout << "Length: " << rect1.getLength() << endl;
    cout << "Area: " << rect1.calculateArea() << endl;
    cout << "Perimeter: " << rect1.calculatePerimeter() << endl;
    cout << endl;

    // Example 2
    Rectangle rect2;
    rect2.setWidth(3.5);
    rect2.setLength(8);

    cout << "Rectangle 2" << endl;
    cout << "Width: " << rect2.getWidth() << endl;
    cout << "Length: " << rect2.getLength() << endl;
    cout << "Area: " << rect2.calculateArea() << endl;
    cout << "Perimeter: " << rect2.calculatePerimeter() << endl;
    cout << endl;

    // Example 3: changing the dimensions of an existing object
    rect1.setWidth(7);
    rect1.setLength(4);

    cout << "Rectangle 1 after changing its size" << endl;
    cout << "Width: " << rect1.getWidth() << endl;
    cout << "Length: " << rect1.getLength() << endl;
    cout << "Area: " << rect1.calculateArea() << endl;
    cout << "Perimeter: " << rect1.calculatePerimeter() << endl;

    return 0;
}
