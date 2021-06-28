#include <iostream>
#include <climits>
using namespace std;

int kidane(int arr[], int n)
{
    int currsum = 0;
    int maxsum =INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }

    
    return maxsum; 
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxsum ;
    int wrap, nowrap,totalsum = 0;
    nowrap= kidane(arr,n);
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrap= totalsum+kidane(arr,n);
    maxsum=max(wrap,nowrap);

    cout<<maxsum;
    return 0;
}