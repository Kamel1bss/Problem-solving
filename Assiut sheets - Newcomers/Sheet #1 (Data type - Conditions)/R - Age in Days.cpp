#include <iostream>
using namespace std;

int main() {
    
    int days, years, months;
    cin >> days;
    years = days / 365;
    days -= years * 365;
    months = days / 30;
    days -= months * 30;
    cout << years <<" years\n"<< months<<" months\n"<< days<<" days";
    
    return 0;
}