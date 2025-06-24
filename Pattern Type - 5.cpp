#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = n, space = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < space; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= k; j++)
        {
            cout << "* ";
        }
        cout << "\n";
        space++;
        k--;
    }
    return 0;
}



//     N = 5

//     * * * * *
//      * * * *
//       * * *
//        * *
//         *

