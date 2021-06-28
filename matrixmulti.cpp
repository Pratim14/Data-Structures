//Matrix Multiplication
#include <iostream>
using namespace std;

int main()
{
    int A[3][4]={{2,4,1,2},{8,4,3,6},{1,7,9,5}};
    int B[4][3]={{1,2,3},{4,5,6},{7,8,9},{4,5,6}};
    int C[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    //Printing the Matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<C[i][j]<<" ";

        }
        cout<<"\n";
    }
    return 0;
}