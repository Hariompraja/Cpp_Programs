#include <iostream>
using namespace std;

int main()
{
    int n, x, flag = 0;
    cout<<"Enter the size of an array: ";
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout<<"Enter the element you need to search: ";
    cin >> x;
    for(int i = 0; i < n; i++)
        if(a[i] == x)
            flag = 1;
    if(flag)
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}
