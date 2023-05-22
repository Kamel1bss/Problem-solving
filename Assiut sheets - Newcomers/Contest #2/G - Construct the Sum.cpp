#include iostream
#include cmath
using namespace std;

int main ()
{
    long long arr[100001];
    long long t;
    cin  t;

    while(t--)
    {
        long long n, s;
        cin  n  s;

        if (n(n+1)2  s)
            cout  -1;
        else
        {
            long long index = 0;
            long long sum = 0;
            for(int i = n; i = 1; i--)
            {
                if ((sum + i) = s && i != s)
                {
                    sum += i;
                    arr[index] = i;
                    index++;
                }

                if (sum == s)
                    break;
            }

            for(int i = 0; i  index; i++)
                coutarr[i]  ;
        }
        coutendl;

    }
    return 0;
}
