#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            cout << "* ";
        }
        cout << "\n";
        k++;
    }
    return 0;
}



//     N = 5

//     *
//     * *
//     * * *
//     * * * *
//     * * * * *