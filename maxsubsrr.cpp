#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cummsum[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cummsum[i] = cummsum[i - 1] + a[i - 1];
    }
    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = cummsum[i] - cummsum[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum;
    return 0;
}