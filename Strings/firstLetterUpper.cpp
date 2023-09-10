#include <bits/stdc++.h>
string convertString(string str)
{
    // WRITE YOUR CODE HERE
    for (int i = 0; i < str.size(); i++)
    {
        // If previous character is a space or if it is the first letter then covert it to upper
        if ((str[i - 1] == ' ') || (i == 0))
        {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}