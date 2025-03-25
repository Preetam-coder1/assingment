#include <iostream>
 using namespace std;
 
 // Find max between two integers
 int findMax(int a, int b) {
     return (a > b) ? a : b;
 }
 
 // Find max between two doubles
 double findMax(double a, double b) {
     return (a > b) ? a : b;
 }
 
 char findMax(char a, char b) {
     return (a > b) ? a : b;
 }
 
 int main() {
     cout << "Max of (10, 20): " << findMax(10, 20) << endl;
     cout << "Max of (5.5, 2.2): " << findMax(5.5, 2.2) << endl;
     cout << "Max of ('A', 'B'): " << findMax('A', 'B') << endl;
     return 0;
 }
