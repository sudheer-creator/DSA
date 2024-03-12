#include <bits/stdc++.h>
using namespace std;
// 2 3 4     k = 2
int getMinDiff(int arr[], int n, int k)
{
    // code here
    sort(arr, arr + n);

    int ans = arr[n - 1] - arr[0];

    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;
    int mini, maxi;

    for (int i = 0; i < n; i++)
    {
        mini = min(smallest, arr[i + 1] - k);
        maxi = max(largest, arr[i] + k);
        ans = min(ans, maxi - mini);
    }
    return ans;
}
int main()
{
    return 0;
}