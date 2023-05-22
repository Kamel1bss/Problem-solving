#include <iostream>
using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;
    
    int counter = 0;
    bool flag = 1;
    int min = 0;
    for(int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        counter++;
        
        if (flag)
        {
            min = val;
            flag = 0;
        }
        else
        {
            if (min > val)
                {
                    min = val;
                }
        }
        
        if (counter == k || i == n)
        {
            counter = 0;
            flag = 1;
            cout << min << " ";
        }
    }
    
    return 0;
}