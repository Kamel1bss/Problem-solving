#include <iostream>
using namespace std;

int main()
{
    int n, pali[100000];
    cin >> n;

    bool palie = true ;
    int counter = 0;
    int counter2 = 0;
    int n_copy = n;
    while(n_copy)
    {
        int digit = 0;
        digit = n_copy % 10;
        counter2++;
        n_copy /= 10;
        if (digit == 0 && counter == 0)
            continue;
        else
        {
            cout << digit;
            counter++;
        }

    }

    for(int i = 0; i < counter2; i++)
    {
        int digit = 0;
        digit = n % 10;
        pali[i] = digit;
        n /= 10;
    }

    for(int i = 0; i < counter2/2; i++)
    {
        if (pali[i] != pali[counter2 - i - 1])
        {
            palie = false;
            break;
        }
    }


    if (palie)
        cout<<endl << "YES";
    else
        cout<< endl << "NO";
    return 0;
}
