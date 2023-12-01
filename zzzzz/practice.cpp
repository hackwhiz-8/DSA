#include <iostream>
using namespace std;

void reverse(int arr[], int n, int k)
{
    // increment i in multiples of 2*k
    for (int i = 0; i < n; i += 2*k)
    {
        int left = i;
 
        // to handle case when 2*k is not multiple of n
        int right = min(i + k - 1, n - 1);
 
        // reverse the sub-array [left, right]
        while (left < right)
            swap(arr[left++], arr[right--]);
    }   
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int k = 2;
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    reverse(arr, n, k);
 
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}