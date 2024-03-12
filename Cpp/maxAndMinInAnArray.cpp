#include <bits/stdc++.h>
using namespace std;
pair<long long, long long> getMinMax(long long a[], int n)
{
    pair<long long, long long> ans;
    ans.first = LONG_LONG_MAX;
    ans.second = LONG_LONG_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < ans.first)
            ans.first = a[i];
        if (a[i] > ans.second)
            ans.second = a[i];
    }
    return ans;
}
int main()
{
    long long a[] = {1, 345, 234, 21, 56789};
    int n = 5;
    pair<long long, long long> ans = getMinMax(a, n);
    cout << "{" << ans.first << "," << ans.second << "}";
}