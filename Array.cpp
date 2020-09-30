//Pascal's Triangle

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j==1 || j==i)
                arr[i][j] = 1;
            else
            {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
            
        }
        
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}