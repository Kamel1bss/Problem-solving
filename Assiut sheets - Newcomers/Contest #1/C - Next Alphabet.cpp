#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    if(a == 'z')
    {
        cout << 'a';
        return 0;
    }

    cout << char(a + 1);

    return 0;
}
