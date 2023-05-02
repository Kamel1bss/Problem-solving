#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    for(int i = 1 ; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for(int x = 1; x < 2 * i; x++)
        {
            cout << "*";
        }
        cout << endl ;
    }
    return 0;
}
