#include <iostream>
using namespace std;

int main()
{
    int a[5];
    cout<<"Size of int "<<sizeof(int)<<endl;
    for(int i=0; i<5; i++)
        cout<<&a[i]<<endl;
}
