#include <iostream>
using namespace std;

int main()
{

    long long num;
    cin >> num;
    bool prime = true ;

    for(int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }

    if(prime)
    {
        cout <<"YES";
    }
    else
    {
        cout <<"NO";
    }

    return 0;
}
