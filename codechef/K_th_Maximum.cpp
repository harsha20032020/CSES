#include <bits/stdc++.h>
using namespace std;
void combinationUtil(int arr[], int n, int r,int index, int data[], int i);
int ctr = 0;
void printCombination(int arr[], int n, int r)
{
    int data[r];
    combinationUtil(arr, n, r, 0, data, 0);
}
void combinationUtil(int arr[], int n, int r, int index,int data[], int i)
{
    if (index == r)
    {
        if (*max_element(data, data + r) == arr[r - 1])
            ctr++;
        return;
    }
    if (i >= n)
        return;

    data[index] = arr[i];
    combinationUtil(arr, n, r, index + 1, data, i + 1);
    combinationUtil(arr, n, r, index, data, i + 1);
}
int main()
{
    int test = 0;
    scanf("%d", &test);
    while (test--)
    {
        int n, r;
        scanf("%d %d", &n, &r);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printCombination(arr, n, r);
        printf("%d\n", ctr);
    }
    return 0;
}