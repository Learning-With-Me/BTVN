#include <bits/stdc++.h>
using namespace std;
#define MAX 100

void soDuong(int n, int arr[], int &tich)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            tich *= arr[i];
        }
    }
}

int main()
{
    int n;
    int tich = 1;
    cin >> n;
    int arr[MAX];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    soDuong(n, arr, tich);
    cout << tich;
    return 0;
}