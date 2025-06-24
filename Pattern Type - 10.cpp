#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}



// N = 5

//     5 4 3 2 1
//     5 4 3 2
//     5 4 3
//     5 4
//     5