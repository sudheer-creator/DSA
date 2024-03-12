#include <bits/stdc++.h>
using namespace std;
int binarySearch(long long arr[], int i, int j, int target)
{
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (arr[mid] == target)
        {
            while (mid - 1 > 0 && arr[mid] == arr[mid - 1])
            {
                mid--;
            }
            return mid;
        }
        else if (arr[mid] < target)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return -1;
}
long long int inversionCount(long long arr[], long long N)
{
    long long int inversion_count = 0;
    unordered_map<long long int, long long int> m;
    long long normal[N];
    for (long long i = 0; i < N; i++)
    {
        normal[i] = arr[i];
    }
    sort(arr, arr + N);
    for (long long i = 0; i < N; i++)
    {
        long long element = normal[i];
        int index = binarySearch(arr, 0, N - 1, element);
        if (m.find(element) != m.end())
        {
            inversion_count += m[element];
        }
        else
        {
            if (index > i)
            {
                inversion_count += index - i;
                m[element] = index - i;
            }
        }
    }
    return inversion_count;
}
int main()
{
    long long arr[] = {468, 335, 1, 170, 225, 479, 359, 463, 465, 206, 146, 282, 328, 462, 492, 496, 443, 328, 437, 392, 105, 403, 154, 293, 383, 422, 217, 219, 396, 448, 227, 272, 39, 370, 413, 168, 300, 36, 395, 204, 312, 323};
    int N = 42;
    cout << inversionCount(arr, N);
}