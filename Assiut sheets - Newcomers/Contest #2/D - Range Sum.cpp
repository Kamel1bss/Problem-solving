#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long  a, b;
        cin >> a >> b;

        if (b > a)
        {
        long long sum1 = b * ( b + 1) / 2;

        long long sum2 = a * (a + 1) / 2;

        long long sum = sum1 - sum2 + a;

        cout << sum << endl;
        }
        else
        {
        long long sum1 = a * ( a + 1) / 2;

        long long sum2 = b * (b + 1) / 2;

        long long sum = sum1 - sum2 + b;

        cout << sum << endl;

        }

    }
    return 0;
}
