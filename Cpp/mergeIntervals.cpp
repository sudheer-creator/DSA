#include <bits/stdc++.h>
using namespace std;
static bool comp(vector<int> &a, vector<int> &b)
{
    return a[0] < b[0];
}
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end(), comp);

    int n = intervals.size();
    int i = 0;
    while (i < n)
    {
        int start = intervals[i][0];
        int end = intervals[i][1];
        while (i < n && intervals[i][0] <= end)
        {
            end = max(end, intervals[i][1]);
            i++;
        }
        ans.push_back({start, end});
    }
    return ans;
}
int main()
{
    vector<vector<int>> intervals = {
        {1, 3},
        {6, 10},
        {12, 18}};
    vector<vector<int>> ans = merge(intervals);
    // for (auto v : ans)
    // {
    //     cout << v[0] << " " << v[1] << endl;
    // }
}