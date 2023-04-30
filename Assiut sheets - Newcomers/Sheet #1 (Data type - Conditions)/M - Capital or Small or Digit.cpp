#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (isdigit(c) == true) 
        cout<<"IS DIGIT";
    else
    {
        cout << "ALPHA" << endl;
        if(int(c) < 97)
            cout<<"IS CAPITAL";
        else
            cout<<"IS SMALL";
    }
    
    return 0;
}