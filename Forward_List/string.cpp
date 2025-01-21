#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<string> l={"Arindam","saheb","Dinda","ad"};
    l.reverse();
    for (auto x: l)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}