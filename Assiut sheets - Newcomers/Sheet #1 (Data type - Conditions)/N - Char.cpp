#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (int(c) < 97)
	 c = char(int(c)+32);
    else
	 c = char(int(c)-32);

    cout<<c;

    return 0;
}