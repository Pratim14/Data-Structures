#include <iostream>

using namespace std;
int main()
{
    int n, y;
    cin >> n >> y;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            if (i == 1 || i == n || j == 1 || j == y)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
            cout << endl;
    }
    return 0;
}
