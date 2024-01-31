/*
 permutation of integers 1,2,\ldots,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.
Input
The only input line contains an integer n.
Output
Print a beautiful permutation of integers 1,2,\ldots,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    unsigned int n;
    cin >> n;
    
    if (n == 1)
        cout << "1";
    else if(n < 4)
        cout << "NO SOLUTION\n";
    else{
        for (unsigned int j = 2; j <= n; j = j+2)
            cout << j << " ";
        for (unsigned int i = 1; i <= n; i = i+2)
            cout << i << " ";
    }
}
