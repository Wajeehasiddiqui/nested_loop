// C++ program to display a pattern
// with 5 rows and 3 columns

#include <iostream>
using namespace std;

int main() {

   int rows = 5;
   int columns = 3;

   for (int i = 1; i <= rows; ++i) {
      for (int j = 1; j <= columns; ++j) {
         cout << "*  ";
      }
      cout << "\n";
   }

   return 0;
}
