#include <bits/stdc++.h>

vector<int> DNF(vector<int> &arr, int low, int high)
{

    if (low < high)
    {
        int mid = low + (high - low) / 2;
        int pivot = arr[mid];

        int i = low;
        int j = high;

        while (i <= j)
        {
            while (arr[i] < pivot)
                i++;
            while (arr[j] > pivot)
                j--;

            if (i <= j)
            {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }

        DNF(arr, low, j);
        DNF(arr, i, high);
    }

    return arr;
}

vector<int> quickSortUsingDutchNationalFlag(vector<int> &arr)
{
    return DNF(arr, 0, arr.size() - 1);
}
