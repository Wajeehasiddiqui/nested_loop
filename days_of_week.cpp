// C++ program to display 7 days of 3 weeks

#include <iostream>
using namespace std;
int main() {
    int weeks = 3, days_in_week = 7;

    for (int i = 1; i <= weeks; ++i) {
        cout << "Week: " << i ;
        cout<<"\n";

        for (int j = 1; j <= days_in_week; ++j) {
            cout << "    Day:" << j ;
            cout<<"\n";
        }cout<<"\n";
    }

    return 0;
}
