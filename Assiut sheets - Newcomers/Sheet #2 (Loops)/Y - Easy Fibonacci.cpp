#include <iostream>
using namespace std;

int main()
{
    int n, fib[46] = {0};
    cin >> n;

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < 46; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < n; i++)
    {
        cout << fib[i] << " ";
    }

    return 0;
}
