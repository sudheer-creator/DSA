#include <bits/stdc++.h>
using namespace std;
int minJumps(int arr[], int n)
{
    int jumps[n];
    memset(jumps, -1, sizeof(jumps));
    jumps[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        int minJump = INT_MAX;
        for (int j = 1; j <= arr[i] && i + j < n; j++)
        {
            if (jumps[i + j] != -1)
            {
                minJump = min(minJump, jumps[i + j] + 1);
            }
        }
        if (minJump != INT_MAX)
            jumps[i] = minJump;
    }
    return jumps[0];
}
int main()
{
    int N = 10;
    int arr[] = {1, 3, 5, 8, 0, 0, 0, 7, 6, 8, 9};
    cout << minJumps(arr, N);
}