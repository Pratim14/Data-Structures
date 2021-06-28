#include <iostream>
using namespace std;

int main()
{
    int n, i, counter = 1;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (counter < n)
    {
        for (i = 0; i <= n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    for (i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}