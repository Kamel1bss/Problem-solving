#include <iostream>
using namespace std;

int main()
{    
    int n;
    cin >> n;
    n /= 1000;

    if (n % 2 == 0)
	cout<<"EVEN";
    else
	cout<<"ODD";
    
    return 0;
}