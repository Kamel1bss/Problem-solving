#include <iostream>
using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;

    int none = 0;
    for(int i = a; i <= b; i++)
    {
        bool lucky = true;
        int i2 = i;
        while(i2)
        {
            int digit = 0;
            digit = i2 % 10;

            if (digit != 7 && digit != 4)
                lucky = false;
            i2 /= 10;
        }

        if (lucky)
            cout << i <<" ";
        else
            none++;

    }

    if (none == (b - a + 1))
        cout << -1;


    return 0;
}
