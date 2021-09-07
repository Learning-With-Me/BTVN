#include <bits/stdc++.h>
using namespace std;
#define MAX 100

bool snt(int n)
{
    bool snt = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            snt = false;
            break;
        }
    }
    return snt;
}

int main()
{
    int n;
    cin >> n;
    int a[MAX];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (snt(a[i]))
        {
            cout << a[i] << " ";
            count++;
        }
    }
    cout << endl
         << count;
    return 0;
}