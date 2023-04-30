#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    
    cout << fixed << setprecision(9);
    double r, area;
    cin >> r;
    area = 3.141592653 * (r * r);
    cout << area;

    return 0;
}

