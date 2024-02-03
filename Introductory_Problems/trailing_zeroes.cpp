/*
Your task is to calculate the number of trailing zeros in the factorial n!.
For example, 20!=2432902008176640000 and it has 4 trailing zeros.
Input
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    unsigned long int n2;
    unsigned int n_five{0};
    unsigned int five_power{5};
    cin >> n2;

    while(floor(n2/five_power))
    {
        n_five = n_five + floor(n2/five_power);
        five_power = five_power*5;
    }
    cout << n_five << "\n";



    


}