#include <bits/stdc++.h>
using namespace std;

string leftRotate(string str, int d)
{
    // Write your code here.

    string s = "";
    int n = str.size();
    d = d % n;

    for (int i = 0; i < d; i++)
    {
        s += str[i];
    }

    for (int i = d; i < n; i++)
    {
        str[i - d] = str[i];
    }

    for (int i = 0; i < d; i++)
    {
        str[n - d + i] = s[i];
    }
    return str;
}

string rightRotate(string str, int d)
{
    d = d % str.size();
    str = leftRotate(str, str.size() - d);

    return str;
}