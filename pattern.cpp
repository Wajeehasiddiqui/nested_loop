// C++ program to display a triangular pattern 
// Number is entered by the user
                                                                                        
#include <iostream>
using namespace std;
                                                                                        
int main() {
                                                                                        
   int i, j, n;
   cout << "Enter Number :  ";
   cin >> n;
                                                                                        
   for (i = 1; i <= n; i++) {
      for (j = 1; j <= i; j++) {
         cout << "*  ";
      }
      cout << "\n";
   }

    return 0;
}
