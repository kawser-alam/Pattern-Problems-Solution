#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 1;
    for(int i = 1; i <= (2 * n) - 1; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            cout << "* ";
        }
        if( i <= n - 1)
        {
            k++;
        }
        else
        {
            k--;
        }
        cout << "\n";
    }
    return 0;
}



//     N = 5

//     *
//     * *
//     * * *
//     * * * *
//     * * * * *
//     * * * *
//     * * *
//     * *
//     *