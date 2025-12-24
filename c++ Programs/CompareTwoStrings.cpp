#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cout<<"Enter two string: ";

    getline(cin, a);
    getline(cin, b);

    if(a == b)
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}
