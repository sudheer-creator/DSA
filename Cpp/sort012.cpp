#include <bits/stdc++.h>
using namespace std;
void sort012(int a[], int n)
{
    int zero_count = 0;
    int one_count = 0;
    int two_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            zero_count++;
        else if (a[i] == 1)
            one_count++;
        else
            two_count++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < zero_count)
            a[i] = 0;
        else if (i < zero_count + one_count)
            a[i] = 1;
        else
            a[i] = 2;
    }
}
int main()
{
    int arr[] = {0, 2, 1, 2, 0};
    int n = 5;
    sort012(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
