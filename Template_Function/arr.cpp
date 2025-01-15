#include<iostream>
using namespace std;
template <typename X>
void printarr(X arr[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int x[]={10,2,34,2,1,1,2,3,4};
    int s=9;
    printarr(x,s);
    return 0;
}