#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while(true)
    {
        if (a >= b)
        {
            if(a == b)
            {
                cout<< a;
                break;
            }

            if (a == 1 || b == 1)
            {
                cout << 1;
                break;
            }


            a = a - b;

        }
        else
        {

            if(a == b)
            {
                cout<< a;
                break;
            }

            if (b == 1 || a == 1)
            {
                cout << 1;
                break;
            }

            b = b - a;

        }
    }


    return 0;
}
