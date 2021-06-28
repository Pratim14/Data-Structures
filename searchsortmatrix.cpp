//Linear Search of sorted Matrix
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, m;
    int target;
    cin >> n >> m >> target;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int r = 0, c = m - 1;
    bool found=false;
    while (r < n and c >= 0)
    {
        if (arr[r][c] == target)
        {
           cout<<r<<" "<<c;
           cout<<endl;
            found= true;
        }
        if (arr[r][c] < target)
        {
            r++;
        }
        else 
        {
            c--;
        }
    }
    if(found){
        cout<<"found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}
