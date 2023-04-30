#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int digit1 = 0;
    int digit2 = 0;

    if(num < 100)
    {
        digit1 = num % 10;
        num /= 10;
        digit2 = num;
    }

    if (digit1 % digit2 == 0 || digit2 % digit1 == 0)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}
