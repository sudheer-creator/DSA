#include <bits/stdc++.h>
using namespace std;
// reverse sub array
void reverseSubarray(int i, int j, vector<long long> &arr)
{
    while (i < j)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        i++;
        j--;
    }
}
// Function to reverse every sub-array group of size k.
void reverseInGroups(vector<long long> &arr, int n, int k)
{
    int i = 0;
    int j = 0;
    while (i < n)
    {
        if (i + k - 1 < n)
            j = i + k - 1;
        else
            j = n - 1;
        reverseSubarray(i, j, arr);
        i += k;
    }
}
int main()
{
    vector<long long> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int k = 3;
    cout << "Before" << endl;
    for (auto a : arr)
    {
        cout << a << " ";
    }
    reverseInGroups(arr, n, k);
    cout << "After" << endl;
    for (auto a : arr)
    {
        cout << a << " ";
    }
    return 0;
}