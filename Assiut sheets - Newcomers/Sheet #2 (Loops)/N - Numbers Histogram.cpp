#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    int n;
    cin >> n;

    while(n--)
    {
        int num;
        cin >> num;

        for(int i = 0; i < num; i++)
        {
            cout<<a;
        }

        cout << endl;
    }
    return 0;
}
