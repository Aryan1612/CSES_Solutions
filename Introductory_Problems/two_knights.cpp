/*
Your task is to count for k=1,2,\ldots,n the number of ways two knights can be placed on a k \times k chessboard so that they do not attack each other.

*/

#include <bits/stdc++.h>

using namespace std;

#define sqr(i) (i*i)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    unsigned long int n;
    cin >> n;

    for (unsigned long int i = 1; i < n+1; i++)
    {

        if (sqr(i) == 1)
            cout << 0 << "\n";
        else
            cout << (sqr(i)%2 ? ((sqr(i)-1)/2)*sqr(i) - 4*(i-1)*(i-2): ((sqr(i))/2)*(sqr(i)-1) - 4*(i-1)*(i-2) ) << "\n";

        /*
        start from top row, move down
        start from leftmost column move right
        */
    }
    



}