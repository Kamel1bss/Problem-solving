#include <iostream>
using namespace std;

int main()
{
    int odd_nums, even_nums, nums;
    cin >> odd_nums >> even_nums;
    nums = odd_nums + even_nums;
    int even = 0;
    int odd = 0;

    if(odd_nums == 0 && even_nums == 0)
    {
        cout << "NO";
        return 0;
    }
    
    if(odd_nums > even_nums)
    {

        for(int i = 1; i <= nums; i++)
        {
            if (i % 2 == 0)
                even++;

            if( i % 2 != 0)
                odd++;
        }
    }

    else if (odd_nums <= even_nums)
    {
        for(int i = 2; i <= nums + 1; i++)
        {
            if (i % 2 == 0)
                even++;

            if( i % 2 != 0)
                odd++;
        }
    }

    if (odd == odd_nums && even == even_nums)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
