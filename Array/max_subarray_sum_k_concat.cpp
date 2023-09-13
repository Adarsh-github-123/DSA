#include <bits/stdc++.h>
long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
    long long csum = 0;
    long long msum = LONG_LONG_MIN;

    for (int i = -1; i < n * k - 1; i++)
    {
        csum += arr[(i + 1) % n];
        msum = max(msum, csum);

        if (csum < 0)
        {
            csum = 0;
        }
    }
    return msum;
}