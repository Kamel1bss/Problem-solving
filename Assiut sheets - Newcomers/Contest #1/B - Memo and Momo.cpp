#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b ,k;
    cin >> a >> b >> k;

    if(a % k == 0 && b % k != 0 )
        cout <<"Memo";

    if(a % k != 0 && b % k == 0 )
        cout <<"Momo";

    if (a % k == 0 && b % k == 0)
        cout<<"Both";

    if (a % k != 0 && b % k != 0)
        cout<<"No One";

    return 0;
}
