#include<iostream>
using namespace std;
template<typename X>
X big(X x,X y)
{
    if(x>y)
    {
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int x =big(10,20);
    cout<<x<<endl;
    return 0;
}