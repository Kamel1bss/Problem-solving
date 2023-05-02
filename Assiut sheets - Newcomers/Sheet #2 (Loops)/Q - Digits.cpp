#include <iostream>
using namespace std;

int main()
{
    long long  t;
    cin >> t;

    while(t--)
    {
        long long num;
        cin >> num;

        if (num == 0)
            cout << 0 << " ";

        while(num)
        {
            long long digit = 0;
            digit = num % 10;
            cout << digit <<" ";
            num /= 10;
        }

        cout << endl;

    }
    return 0;
}
