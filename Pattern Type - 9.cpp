#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}

//     N = 5

//     5 4 3 2 1
//     4 3 2 1
//     3 2 1
//     2 1
//     1