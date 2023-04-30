#include<bits/stdc++.h>
using namespace std;

// function checks if palindrome
bool is_palindrome(int num)
{
    bool palindrome = true;
    string str = "";
    while(num)
    {
        int digit = num % 10;
        num /= 10;
        char c =  digit + '0';
        str += c;
    }

    for(int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[str.size() - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    return palindrome;
}

// function checks if prime
bool is_prime(int num)
{
    if (num == 0 || num == 1)
        return false;

    bool prime = true;
    for(int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }

    return prime;
}

int main() {

    int num;    cin >> num;
    for(int i = 2 ; i < num; i++)
    {
        if (is_palindrome(i) && is_prime(i))
            cout  << i << endl;
    }
    return 0;
}
