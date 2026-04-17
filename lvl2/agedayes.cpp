#include <iostream>
using namespace  std;

int main(){

    int x , y , z , h , m ; cin>>x;


    y = x / 365;       
    z = x % 365;       
    h = z / 30;         
    m = z % 30;         


    cout << y << " years\n";
    cout << h << " months\n" ;
    cout << m  << " day\n";

return 0;

}