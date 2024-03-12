#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int maxPro = 0;
    int n = prices.size();
    stack<int> s;
    s.push(prices[n - 1]);
    vector<int> nextGre(n, -1);
    for (int i = n - 2; i >= 0; i--)
    {
        nextGre[i] = s.top();
        if (prices[i] > s.top())
        {
            s.pop();
            s.push(prices[i]);
        }
        int currPro = nextGre[i] - prices[i];
        if (currPro > 0 && currPro > maxPro)
        {
            maxPro = currPro;
        }
    }
    return maxPro;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4, 8, 9, 9};
    cout << maxProfit(prices);
}