#include <iostream>
using namespace std;

int main()
{
    int n , Arr[1000001] = {0};
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    int even_count = 0;
    int odd_count = 0;
    int pos_count = 0;
    int neg_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (Arr[i] >= 0)
        {
            if (Arr[i] == 0)
            {
                even_count++;
            }

            if(Arr[i] % 2 == 0 && Arr[i] != 0)
            {
                even_count++;
                pos_count++;
            }
            else if (Arr[i] % 2 != 0)
            {
                odd_count++;
                pos_count++;

            }

        }
        else
        {
            if(Arr[i] % 2 == 0)
            {
                even_count++;
                neg_count++;
            }
            else if (Arr[i] % 2 != 0)
            {
                odd_count++;
                neg_count++;

            }
        }
    }

    cout << "Even: " << even_count << endl;
    cout << "Odd: " << odd_count << endl;
    cout << "Positive: " << pos_count << endl;
    cout << "Negative: " << neg_count << endl;
    return 0;
}
