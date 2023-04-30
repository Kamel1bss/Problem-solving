#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int s1, e1, s2, e2;
    cin >> s1 >> e1 >> s2 >> e2;

    if (max(s1,s2) > min(e1,e2))
	cout<<-1;
    else
	cout<< max(s1,s2) <<" "<<min(e1,e2);
    
    return 0;
}