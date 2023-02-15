// C++ program to display a triangular pattern of numbers using nested do-while loop

#include <iostream>
using namespace std;
    
int main() {
    
int rows, i,j;
i = 1;
cout << "Enter the number of rows: ";
cin >> rows;
    do {
        j = 1;
        do{
            cout << j;
            j++;
        }while(j <= i);
        cout << "\n";
        i++;
    }while(i <= rows);
                                
    return 0;
}
