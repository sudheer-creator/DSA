#include <bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    vector<int> res;
    if (a[i] <= b[j])
    {
        res.push_back(a[i]);
        i++;
    }
    else
    {
        res.push_back(b[j]);
        j++;
    }
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            if (res.back() != a[i])
                res.push_back(a[i]);
            i++;
        }
        else if (a[i] == b[j])
        {
            if (res.back() != a[i])
                res.push_back(a[i]);
            i++;
            j++;
        }
        else
        {
            if (res.back() != b[j])
                res.push_back(b[j]);
            j++;
        }
    }
    while (i < n)
    {
        if (res.back() != a[i])
            res.push_back(a[i]);
        i++;
    }
    while (j < m)
    {
        if (res.back() != b[j])
            res.push_back(b[j]);
        j++;
    }
    return res;
}
int main()
{
    vector<int> a = {};
    vector<int> b = {1, 1, 2, 2, 3, 3, 3, 4, 5, 5, 5, 6, 7};
    vector<int> res = sortedArray(a, b);
    for (auto &r : res)
    {
        cout << r << " ";
    }
    return 0;
}