#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
        for (int j = 0; j < n - 1; j++)
            swap(arr[j], arr[j + 1]);

    for (int i = 0; i < n; i++)
        cout
            << arr[i] << " ";

    return 0;
}
