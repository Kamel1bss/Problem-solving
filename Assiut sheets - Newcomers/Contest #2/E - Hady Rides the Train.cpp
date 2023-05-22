#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    long long seat;
    cin >> seat;
    
    // because each row have 4 seats
    long long row = seat / 4; // will give us the current row
    long long coulmn;
    if (row %2 == 0) // because even rows start from left to right
    {
        coulmn = seat % 4;
    }
    else // because odd rows start from right to left 
    {
        coulmn = 3 - (seat % 4);
    }
    cout << row <<" " << coulmn;
    return 0;
}
