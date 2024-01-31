/*
A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    unsigned int t;
    cin >> t;

    unsigned int y, x;     //you can only get int ouput form int*int an not long int

    for (unsigned int i {0}; i < t; i++)
    {
        cin >> y >> x;

        if (x == 1 && !(y%2))
            cout << y*y << "\n";

        else if (y == 1 && !((x+1)%2))
            cout << x*x << "\n";

        else
        {
            if (y > x)
            {
                if (!(y%2))
                    cout << (y*y-x+1) << "\n";
                else
                    cout << ((y-1)*(y-1) + x) << "\n";
            }
            else
            {
                if (!(x%2))
                    cout << ((x-1)*(x-1) + y) << "\n";
                else
                    cout << (x*x-y+1) << "\n";
            }
        }
    }
}