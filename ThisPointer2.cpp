#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor to initialize length and width
    Rectangle(int length, int width) {
        // Using 'this' to resolve naming conflict
        this->length = length;
        this->width = width;
    }

    // Method to calculate area
    int calculateArea() const {
        return this->length * this->width; // Using 'this' to access members
    }

    // Method to return the current object
    Rectangle& setDimensions(int length, int width) {
        this->length = length;
        this->width = width;
        return *this; // Returning the current object
    }

    // Method to display dimensions
    void display() const {
        cout << "Length: " << this->length << ", Width: " << this->width << endl;
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect(10, 5);

    // Display initial dimensions and area
    rect.display();
    cout << "Area: " << rect.calculateArea() << endl;

    // Update dimensions using the setDimensions method
    rect.setDimensions(7, 3).display();
    cout << "Updated Area: " << rect.calculateArea() << endl;

    return 0;
}
