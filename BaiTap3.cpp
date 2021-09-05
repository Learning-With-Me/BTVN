#include <bits/stdc++.h>
using namespace std;

void nhapGiaTri(int &x1, int &y1, int &R1, int &x2, int &y2, int &R2)
{
    cin >> x1 >> y1 >> R1 >> x2 >> y2 >> R2;
}

int khoangCachTam(int x1, int y1, int R1, int x2, int y2, int R2)
{
    int khoangCachTam = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return khoangCachTam;
}

bool soSanh(int x1, int y1, int R1, int x2, int y2, int R2, int khoangcachtam)
{
    if (R1 + R2 == khoangcachtam || abs(R1 - R2) == khoangcachtam)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x1, y1, R1, x2, y2, R2;
    nhapGiaTri(x1, y1, R1, x2, y2, R2);
    int khoangcachtam = khoangCachTam(x1, y1, R1, x2, y2, R2);
    bool sosanh = soSanh(x1, y1, R1, x2, y2, R2, khoangcachtam);
    if (sosanh)
    {
        cout << "HAI DUONG TRON TIEP XUC";
    }
    if (!sosanh)
    {
        cout << "HAI DUONG TRON KHONG TIEP XUC";
    }
    return 0;
}