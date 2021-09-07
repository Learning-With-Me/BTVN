#include <bits/stdc++.h>
using namespace std;
#define MAX 100

void thay(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[MAX];
    thay(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}