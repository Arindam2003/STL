#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<float, 5> a2 = {23.4, 2.2, 12.4, 90.1, 21.4};
    array<float, 5>::iterator it;
    float sum=0.0;
    for (it = a2.begin(); it != a2.end(); it++)
    {
        sum=sum+(*it);
    }
    cout<<sum<<endl;
    return 0;
}