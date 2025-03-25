#include <iostream>
 using namespace std;
 
 
 double volume(double side) {
     return side * side * side;
 }
 
 
 double volume(double radius, double height) {
     return 3.1416 * radius * radius * height; 
 }
 
 int main() {
     double side, radius, height;
 
     
     cout << "Enter the side length of the cube: ";
     cin >> side;
 
     
     cout << "Enter the radius and height of the cylinder: ";
     cin >> radius >> height;
 
     
     cout << "Volume of Cube: " << volume(side) << endl;
     cout << "Volume of Cylinder: " << volume(radius, height) << endl;
 
     return 0;
 }
