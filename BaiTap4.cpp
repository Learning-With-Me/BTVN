#include <bits/stdc++.h>
using namespace std;
#define MAX 100

void mang(int &n, int arr[], int x, int &k)
{
    cin >> n;
    if (n <= 0 || n > MAX) {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // cout << arr[i];
    }

    cin >> x;
    cin >> k;
    n++;
    if (k > n)
    {
        return;
    }
    for (int i = n; i >= k; i--)
    {
        arr[i - 1] = arr[i - 2];
    }
    arr[k - 1] = x;
    return;
}

int main()
{
    int n;
    int arr[MAX];
    int x;
    int k;
    mang(n, arr, x, k);
    if (k > n || n <= 0 || n > MAX)
    {
        cout << "ERROR";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}