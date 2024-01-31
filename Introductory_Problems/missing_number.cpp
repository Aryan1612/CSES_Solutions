/*
You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long int n, num;   //take care of long or no long
    unsigned long int sum;
    cin >> n;

    sum = !(n%2) ? (n/2)*(n+1) : ((n+1)/2)*n;
    
    while (n-1)
    {
        cin >> num;
        sum -= num;
        n--;
    }
    cout << sum;


}
