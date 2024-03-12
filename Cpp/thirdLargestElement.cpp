#include <bits/stdc++.h>
using namespace std;
int thirdLargest(int a[], int n)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        if (pq.size() < 3)
        {
            pq.push(a[i]);
        }
        else
        {
            if (pq.top() < a[i])
            {
                pq.pop();
                pq.push(a[i]);
            }
        }
    }
    return pq.top();
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    cout << thirdLargest(a, 7);
    return 0;
}
