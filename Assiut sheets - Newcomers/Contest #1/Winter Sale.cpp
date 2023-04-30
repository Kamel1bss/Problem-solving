#include <bits/stdc++.h>
using namespace std;

int main()
{
    double Discount, price_After;
	cin >> Discount >> price_After;
	double a = (Discount * price_After) / (100 - Discount);
	double price_Before = a + price_After;
	cout <<fixed << setprecision(2) << price_Before;
    return 0;
}

