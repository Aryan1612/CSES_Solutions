/*
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?
Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x_1,x_2,\ldots,x_n: the contents of the array.
Output
Print the minimum number of moves.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    size_t n;
    unsigned long int x, y;
    unsigned long long int moves{0};

    cin >> n;
    cin >> x;

    for (size_t i{1}; i < n; i++)
    {
        cin >> y;
        if (y < x)
        {   
            moves += (x-y);
            y = x;
        }
        x = y;
    }
    cout << moves;


}
