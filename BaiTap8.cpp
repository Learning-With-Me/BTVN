#include <bits/stdc++.h>
using namespace std;
#define MAX 100

bool scp(int a)
{
    bool scp = true;
    double b = sqrt(a);
    if (b != round(b))
    {
        scp = false;
    }
    return scp;
}

int main()
{
    int n;
    cin >> n;
    int arr[MAX];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (scp(arr[i]))
        {
            cout << arr[i] << " ";
            count++;
        }
    }
    cout << endl
         << count;
}