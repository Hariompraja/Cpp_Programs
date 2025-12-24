#include <iostream>
using namespace std;

int main()
{
    int a[2][2], sum = 0;
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> a[i][j];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            sum += a[i][j];

    cout << sum;
    return 0;
}
