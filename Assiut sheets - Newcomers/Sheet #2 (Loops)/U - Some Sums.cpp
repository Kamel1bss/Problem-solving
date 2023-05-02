#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        int i_copy = i;
        int digit_sum = 0;
        while(i_copy)
        {
            int digit = 0;
            digit = i_copy % 10;
            digit_sum += digit;
            i_copy /= 10;
        }

        if (a >= b)
        {
            if (digit_sum <= a && digit_sum >= b)
            sum += i;
        }
        else
        {
            if (digit_sum <= b && digit_sum >= a)
            sum += i;
        }
    }

    cout << sum;

    return 0;
}
