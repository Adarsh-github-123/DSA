#include <bits/stdc++.h>
int minimumParentheses(string pattern)
{
    // Write your code here.
    // pattern is the given string.
    int count1 = 0;
    int count2 = 0;
    int min = 0;
    for (int i = 0; i < pattern.size(); i++)
    {

        if (pattern[i] == '(')
        {
            count1++;
        }
        else if (pattern[i] == ')')
        {
            if (count1 > 0)
            {
                count1--;
            }
            else
            {
                count2++;
            }
        }
    }
    min = count1 + count2;
    return min;
}