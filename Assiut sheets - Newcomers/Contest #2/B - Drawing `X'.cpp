#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
        {
            if (i < n/2)
            {
                for(int j = 0; j < n; j++)
                {
                    if (j == i)
                         cout << "\\";
                   else if (j == n-i-1)
                         cout << "/";
                    else
                         cout << "*";
                }
            }
            
            if (n/2 == i)
            {
                for(int j = 0; j < n; j++)
                {
                    if (n/2 == j)
                        cout << "X";
                    else
                        cout << "*";
                }
            }
            
            if (i > n/2)
            {
                
                for(int j = n-1; j >= 0; j--)
                {
                    if (j == i)
                        cout << "/";
                    else if (j == n-i-1)
                        cout << "\\";
                    else
                        cout << "*";
                }
            }
            
            cout << endl;
            
        }

    return 0;
}