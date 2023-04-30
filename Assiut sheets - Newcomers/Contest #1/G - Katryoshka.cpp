#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long eye , mouth, body;
    cin >> eye >> mouth >> body;

    long long  res = 0;
    long long minn = min({eye, mouth, body});
    res += minn;
    eye -= minn;
    mouth -= minn;
    body -= minn;

    minn = min({(eye / 2) , body});
    res += minn;

    cout << res;
    return 0;
}
