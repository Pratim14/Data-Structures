#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = 31;
    int high, low;
    high = n - 1;
    low = 0;

    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            break;
        }

        else if (arr[low] + arr[high] > k)
            high--;
        else
            low++;
    }

    return 0;
}