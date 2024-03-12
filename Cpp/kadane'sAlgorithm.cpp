#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{

    long long osum = LONG_LONG_MIN;
    long long csum = 0;
    for (int i = 0; i < n; i++)
    {
        if (csum >= 0)
        {
            csum += arr[i];
        }
        else
        {
            csum = arr[i];
        }
        osum = max(osum, csum);
    }
    return osum;
}
int main()
{
    return 0;
}