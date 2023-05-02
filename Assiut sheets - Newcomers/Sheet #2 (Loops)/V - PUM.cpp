#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

        int line = 0;
        int counter = 0;
        for(int j = 1; j <2000000; j++)
        {
            if (j % 4 == 0)
            {
                continue;
            }

            counter++;
            cout << j <<" ";

            if (counter % 3 == 0)
            {
                cout <<"PUM";
                line++;

                if (line != n)
                    cout<<endl;
            }

            if (line == n)
                break;
        }
    return 0;
}
