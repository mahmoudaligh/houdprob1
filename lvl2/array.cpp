#include <iostream>
#include <algorithm>
using namespace std;

int main() {


     int x [5] = {};
     int i, j = 1 ;


     for ( i = 0; i < 5; i++)
     {
        cin >> x[i];
     }

     sort(x, x + 5);
     
    cout << "-------\n";

     for ( i = 0; i < 5; i++)
             cout << x[i] << "\n";
}

