#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxx = 0;
    while (n--)
    {
        int num;
        cin >> num;

        if (num >= maxx)
            maxx = num;
    }

     cout << maxx;

    return 0;
}
