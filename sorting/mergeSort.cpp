#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }
    int index = 0;
    int index2 = 0;
    int mainIndex = s;
    while ((index < len1) && (len2 > index2))
    {
        if (first[index] < second[index2])
        {
            arr[mainIndex++] = first[index++];
        }
        else
        {
            arr[mainIndex++] = second[index2++];
        }
    }
    while (index < len1)
    {
        arr[mainIndex++] = first[index++];
    }
    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // recursive part
    mergeSort(arr, s, mid);
    // rightpart
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int arr[10] = {1, 6, 2, 6, 0, 5, 3};
    mergeSort(arr, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}