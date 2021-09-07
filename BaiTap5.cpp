#include <bits/stdc++.h>
using namespace std;
#define MAX 100

void nhapMang(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void chepMang(int n, int arr1[], int arr[])
{
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
}

void maxVal(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void posmax(int n, int arr1[], int arr[], int &countmax)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr[n - 1])
        {
            countmax = i;
            return;
        }
    }
}

void posmin(int n, int arr1[], int arr[], int &countmin)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr[0])
        {
            countmin = i;
            return;
        }
    }
}

void pos2max(int n, int arr1[], int arr[], int &count2max)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr[n - 2])
        {
            count2max = i;
            return;
        }
    }
}

void pos2min(int n, int arr1[], int arr[], int &count2min)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr[1])
        {
            count2min = i;
            return;
        }
    }
}

void maxAm(int n, int arr1[], int arrAm[], int &countphantuArrAm)
{
    int sophantuArrAm = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] < 0)
        {
            arrAm[sophantuArrAm] = arr1[i];
            sophantuArrAm++;
        }
    }

    countphantuArrAm = sophantuArrAm;

    for (int i = 0; i < countphantuArrAm - 1; i++)
    {
        for (int j = 0; j < countphantuArrAm - i - 1; j++)
        {
            if (arrAm[j] > arrAm[j + 1])
            {
                int temp = arrAm[j];
                arrAm[j] = arrAm[j + 1];
                arrAm[j + 1] = temp;
            }
        }
    }
}

void posmaxAm(int n, int arr1[], int arrAm[], int &countmaxAm, int &countphantuArrAm)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arrAm[countphantuArrAm - 1])
        {
            countmaxAm = i;
            return;
        }
    }
}

void minDuong(int n, int arr1[], int arrDuong[], int &countphantuArrDuong)
{
    int sophantuArrDuong = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > 0)
        {
            arrDuong[sophantuArrDuong] = arr1[i];
            sophantuArrDuong++;
        }
    }

    countphantuArrDuong = sophantuArrDuong;

    for (int i = 0; i < countphantuArrDuong - 1; i++)
    {
        for (int j = 0; j < countphantuArrDuong - i - 1; j++)
        {
            if (arrDuong[j] > arrDuong[j + 1])
            {
                int temp = arrDuong[j];
                arrDuong[j] = arrDuong[j + 1];
                arrDuong[j + 1] = temp;
            }
        }
    }

    // bubbleSort(countphantuArDuong, arrDuong)
}

void posminDuong(int n, int arr1[], int arrDuong[], int &countminDuong, int &countphantuArrDuong)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arrDuong[0])
        {
            countminDuong = i;
            return;
        }
    }
}

// void bubbleSort(int n, int arr[])
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 doiCho(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

// void doiCho(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

int main()
{
    int n;
    int arr[MAX];
    int arr1[MAX]; // arrDuplicate
    int countmax;
    int countmin;
    int count2max; // countSecondMax
    int count2min;
    int countmaxAm; // countMaxAm |} camelCase syntax
    int countphantuArrAm;
    int arrAm[MAX];
    int countminDuong;
    int countphantuArrDuong;
    int arrDuong[MAX];
    cin >> n;
    nhapMang(n, arr);
    chepMang(n, arr1, arr);

    maxVal(n, arr);
    posmax(n, arr1, arr, countmax);
    cout << arr[n - 1] << " " << countmax << endl;

    posmin(n, arr1, arr, countmin);
    cout << arr[0] << " " << countmin << endl;

    pos2max(n, arr1, arr, count2max);
    pos2min(n, arr1, arr, count2min);
    cout << arr[n - 2] << " " << count2max << endl;

    maxAm(n, arr1, arrAm, countphantuArrAm);
    posmaxAm(n, arr1, arrAm, countmaxAm, countphantuArrAm);
    minDuong(n, arr1, arrDuong, countphantuArrDuong);
    posminDuong(n, arr1, arrDuong, countminDuong, countphantuArrDuong);
    // cout << "DEBUG HERE" << endl;
    // for (int i = 0; i < countphantuArrAm; i++)
    // {
    //     cout << arrAm[i] << " ";
    // }
    // cout <<  "END DEBUG HERE" << endl;
    cout << arr[1] << " " << count2min << endl;
    cout << arrAm[countphantuArrAm - 1] << " " << countmaxAm << endl;
    cout << arrDuong[0] << " " << countminDuong << endl;
    return 0;
}