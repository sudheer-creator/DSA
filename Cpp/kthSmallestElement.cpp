#include <bits/stdc++.h>
using namespace std;
class comp
{
public:
    bool operator()(const int &a, const int &b)
    {
        return a < b;
    }
};
int kthSmallest(int arr[], int l, int r, int k)
{
    int ans = INT_MAX;
    priority_queue<int, vector<int>, comp> pq;
    for (int i = 0; i <= r; i++)
    {
        if (pq.size() < k)
        {
            pq.push(arr[i]);
        }
        else
        {
            if (pq.top() > arr[i])
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
    }
    return pq.top();
}
int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int l = 0;
    int r = 5;
    int k = 3;
    cout << kthSmallest(arr, l, r, k);
    return 0;
}