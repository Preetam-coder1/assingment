#include <iostream>
 using namespace std;
 
 // Function with two integer parameters (Addition)
 int calculate(int a, int b) {
     return a + b;
 }
 
 // Function with three integer parameters (Multiplication)
 int calculate(int a, int b, int c) {
     return a * b * c;
 }
 
 // Function with two double parameters (Division)
 double calculate(double a, double b) {
     if (b != 0)
         return a / b;
     else {
         cout << "Error: Division by zero!" << endl;
         return 0;
     }
 }
 
 string calculate(string str1, string str2) {
     return str1 + str2;
 }
 
 int main() {
     int x = 10, y = 5, z = 2;
     double p = 15.5, q = 2.5;
     string s1 = "Hello, ", s2 = "World!";
 
     
     cout << "Addition (int, int): " << calculate(x, y) << endl;
     cout << "Multiplication (int, int, int): " << calculate(x, y, z) << endl;
     cout << "Division (double, double): " << calculate(p, q) << endl;
     cout << "String Concatenation (string, string): " << calculate(s1, s2) << endl;
 
     return 0;
 }
