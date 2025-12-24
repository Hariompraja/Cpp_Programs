#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout<<"Enter the number: ";
    if(n > 0)
        cout << "Positive";
    else if(n < 0)
        cout << "Negative";
    else
        cout << "Zero";
    return 0;
}
