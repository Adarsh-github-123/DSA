#include <bits/stdc++.h>
string encode(string &message)
{
    string result = "";
    int count = 0;
    char a = message[0];
    //   Write your code here.
    for (int i = 0; i < message.size(); i++)
    {

        if (message[i] == a)
        {
            count++;
        }
        else
        {
            result += a + to_string(count);
            count = 1;
            a = message[i];
        }
    }
    // Append the last character and its count to the result
    result += a + to_string(count);
    return result;
}