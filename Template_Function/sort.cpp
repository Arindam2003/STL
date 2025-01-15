#include<iostream>
using namespace std;
template<typename X>
void sort(X arr[],int size)
{
    for (int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                X temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
            }
        }
    }
}
int main()
{
    char x[]={'a','b','z','f','u','e','w','q','w'};
    int s=9;
    sort(x,s);
    for(int i=0;i<s;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return 0;
}