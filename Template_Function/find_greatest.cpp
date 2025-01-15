#include<iostream>
using namespace std;
template<typename X>
int find(X arr[],int size,X number)
{
    for(int i=0;i<size;i++)
    {
        if(number==arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char x[]={'a','b','z','f','u','e','w','q','w'};
    int s=9;
    char num='w';
    int res=find(x,s,num);
    cout<<res<<endl;
    // for(int i=0;i<s;i++)
    // {
    //     cout<<x[i]<<" ";
    // }
    cout<<endl;
    return 0;
}