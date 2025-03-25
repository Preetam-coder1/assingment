#include <iostream>
 using namespace std;
 
 // Area of Square
 double area(double side) {
     return side * side;
 }
 
 // Area of Rectangle
 double area(double length, double width) {
     return length * width;
 }
 
 // Area of Circle
 double area(double radius, char) {
     return 3.1416 * radius * radius;
 }
 
 int main() {
     cout << "Area of Square: " << area(5.0) << endl;
     cout << "Area of Rectangle: " << area(5.0, 10.0) << endl;
     cout << "Area of Circle: " << area(7.0, 'c') << endl;
     return 0;
 }
