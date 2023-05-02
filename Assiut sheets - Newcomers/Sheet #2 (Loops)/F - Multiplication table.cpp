#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int j = 1; j <= 12; j++)
    {
        cout << n <<" * " << j << " = " << n * j << endl;
    }

    return 0;
}
