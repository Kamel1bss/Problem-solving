#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    int min1, min2, min3 = 0;
    cin >> a >> b >> c;

    if(a <= b && a <= c)
    {
        min1 = a;
        if (b >= c)
        { 
            min2 = c;
            min3 = b;
        }
        else
        {
            min2 = b;
            min3 = c;
        }
    }
    else if (b <= a && b <= c)
    {
        min1 = b;
        if (a >= c)
        {
            min2 = c;
            min3 = a;
        }
        else
        { 
            min2 = a;
            min3 = c;
        }
    }
    else if (c <= a && c <= b)
    {
        min1 = c;
        if (a >= b)
        {
            min2 = b;
            min3 = a;
        }
        else
        {
            min2 = a;
            min3 = b;
        }
    }
    
    cout << min1 << endl << min2 << endl << min3 << endl;
    cout << endl << a << endl << b << endl << c << endl;

    return 0;
}
