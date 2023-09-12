#include <bits/stdc++.h>

int Kadanes_algo(int arr[], int n)
{
    int sum = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        maxi = max(maxi, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int flipBits(int *arr, int n)
{
    int sum = 0;
    // int mini = 0;
    int zero_count = 0;
    int one_count = 0;

    // First converting 1 -> -1 and 0 -> 1 in order to use Kadane's Algorithm

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            one_count++;
            arr[i] = -1;
        }
        else
        {
            zero_count++;
            arr[i] = 1;
        }
    }

    int max_sum = Kadanes_algo(arr, n);
    return max_sum + one_count;
}