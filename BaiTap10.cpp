#include <bits/stdc++.h>
using namespace std;
#define MAX 100

bool tangDan(int n, int arr[])
{
    bool check = true;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                check = false;
                return check;
            }
        }
    }
    return check;
}

int main()
{
    int n;
    cin >> n;
    int arr[MAX];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (!tangDan(n, arr))
    {
        cout << "DAY KHONG TANG DAN";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}