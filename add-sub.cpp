#include <iostream>
 using namespace std;
 
 // Function for addition
 int calculate(int a, int b) {
     return a + b;
 }
 
 // Function for subtraction
 int calculate(int a, int b, char op) {
     if (op == '-') return a - b;
     else return 0; 
 }
 
 // Function for multiplication
 int calculate(int a, int b, char op1, char op2) {
     if (op1 == '*' && op2 == '*') return a * b;
     else return 0; 
 }
 
 // Function for division
 double calculate(double a, double b, char op1, char op2, char op3) {
     if (op1 == '/' && op2 == '/' && op3 == '/') {
         if (b != 0) return a / b;
         else {
             cout << "Error: Division by zero!" << endl;
             return 0;
         }
     }
     return 0; 
 }
 
 int main() {
     int x, y;
     
     
     cout << "Enter two integers: ";
     cin >> x >> y;
 
     
     cout << "Addition: " << calculate(x, y) << endl;
     cout << "Subtraction: " << calculate(x, y, '-') << endl;
     cout << "Multiplication: " << calculate(x, y, 0) << endl;
     cout << "Division: " << calculate((double) x, (double) y) << endl;
 
     return 0;
 }
