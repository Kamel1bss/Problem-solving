#include <iostream>
using namespace std;

int main()
{
    while(true)
    {
        int a, b;
        cin >> a >> b;

        if (a <= 0 || b <= 0)
        {
            break;
        }


        if (a >= b)
        {
            int sum = 0;
            for(int i = b; i <= a; i++)
            {
                cout << i << " ";
                sum += i;
            }

            cout << "sum =" << sum << endl;
        }
        else
        {
            int sum = 0;
            for(int i = a; i <= b; i++)
            {
                cout << i << " ";
                sum += i;
            }

            cout << "sum =" << sum << endl;
        }


    }

    return 0;
}
