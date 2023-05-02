#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {

        int a;
        cin >> a;

        int counter = 0;
        while( a > 0)
        {
           int digit = 0;
           digit =  a % 2;
           if (digit == 1)
            counter++;
           a /= 2;
        }

        int sum = 0;
        for (int i = 0; i < counter; i++)
        {
            sum += 1 * pow(2, i);
        }

        cout << sum << endl;
    }
    return 0;
}
