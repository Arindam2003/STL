#include<iostream>
using namespace std;
template<typename T>
T smal(T a,T b)
{
    if(a<b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int x=smal(10,23);
    cout<<x<<endl;
    return 0;
}