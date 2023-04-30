#include <iostream>
using namespace std;

int main()
{
    long long n, k, a;
    long long Ans = 0;
    cin >> n >> k >> a;

    long long past = n * k;
    Ans = past / a;

    if (past % a == 0)
    {
        if (Ans > 2147483647)
            cout <<"long long";
        else if (Ans <= 2147483647)
            cout <<"int";
    }
    else
        cout <<"double";

    return 0;
}
