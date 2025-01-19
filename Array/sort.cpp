#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5>a1={2,3,1,2,4};
    for(int x=0;x<a1.size()-1; x++)
    {
        for(int y=0;y<a1.size()-1-x;y++)
        {
            if(a1[y]<a1[y+1])
            {
                // int temp=a1[y];
                // a1[y]=a1[y+1];
                // a1[y+1]=temp;
            }
        }
    }
    for(int i:a1)
    {
        cout<<i<<" ";
    }
    return 0;
}