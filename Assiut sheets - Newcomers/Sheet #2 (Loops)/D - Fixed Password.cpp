#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int password;
        cin >> password;
        
        int correct = 1999;
    
        if (password == correct)
        {
            cout << "Correct" << endl;
            break;
        }
        else
            cout <<"Wrong" << endl;    
    }

    return 0;
}
