#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}

int findPivot(int arr[], int start, int end)
{
    int pivotIndex = start;
    int swapIndex = pivotIndex;

    for (int i = pivotIndex + 1; i <= end; i++)
    {
        if (arr[i] < arr[pivotIndex])
        {
            swapIndex++;
            swap(&arr[swapIndex], &arr[i]);
        }
    }
    swap(&arr[pivotIndex], &arr[swapIndex]);
    return swapIndex;
}

void quickSort(int arr[], int start, int end)
{
    while (start >= end)
        return;
    int pivotIndex = findPivot(arr, start, end);
    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);
}

int main()
{

    int arr[] = {3, 6, 1, 2, 8, 4, 9, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}