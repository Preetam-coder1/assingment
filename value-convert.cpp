#include <iostream>
 using namespace std;
 
 double convert(int num) {
     return (double)num;
 }
 
 int convert(double num) {
     return (int)num;
 }
 
 char convert(char ch) {
     return toupper(ch);
 }
 
 int main() {
     cout << "Convert 5 to double: " << convert(5) << endl;
     cout << "Convert 10.75 to int: " << convert(10.75) << endl;
     cout << "Convert 'a' to uppercase: " << convert('a') << endl;
     return 0;
 }
