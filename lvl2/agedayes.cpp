#include <iostream>
using namespace std;

int main() {
    int d;
    cin >> d;

    int years = d / 365;
    int remaining = d % 365;

    int months = remaining / 30;
    int days = remaining % 30;

    cout << years << " years\n";
    cout << months << " months\n";
    cout << days << " days\n";

    return 0;
}