/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    unsigned int max{0}, current{1};
    char prev_char{'X'}, curr_char{'Y'};

    while (true)
    {
        curr_char = getchar();
        if (curr_char == '\n')
            break;
        if (curr_char == prev_char)
            current++;
        else
        {
            if (current >= max)
                max = current;
            current = 1;
        }
        prev_char = curr_char;
    }
    if (current >= max)
            max = current;
    cout << max;

}
