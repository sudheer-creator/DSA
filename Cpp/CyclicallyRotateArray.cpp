#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int prev = arr[0];
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        arr[i] = prev;
        prev = curr;
    }
    arr[0] = prev;
}
int main()
{
}