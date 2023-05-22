#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    long long n;
    cin >> n;
    long long maxx = 0;
    while(n--)
    {
        long long num;
        cin >> num;
        long long counter = 0;
        while(num)
        {
            if (num % 2 == 0)
                counter++;
            else
                break;
            num /= 2;
        }

        if(counter > maxx)
            maxx = counter;
    }

    cout << maxx;
    return 0;
}
