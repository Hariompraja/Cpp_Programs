#include <iostream>
using namespace std;

int main()
{
    int a[2][2], flag = 1;
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> a[i][j];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            if(a[i][j] != a[j][i])
                flag = 0;

    if(flag)
        cout << "Symmetric";
    else
        cout << "Not Symmetric";
    return 0;
}
