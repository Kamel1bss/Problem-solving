#include <iostream>
using namespace std;

int main()
{
    int a, b, d;
    char c, q;
    cin>> a >> c >> b >> q >> d;

    switch(c)
    {
        case '+':
           if (a + b == d)
		cout<<"Yes";
           else
		cout<<a+b;
        break;
        case '-':
           if (a - b == d)
		cout<<"Yes";
           else
		cout<<a-b;
        break;
        case '*':
           if (a * b == d)
		cout<<"Yes";
           else
		cout<<a*b;
        break;
        
    }

    return 0;
}
