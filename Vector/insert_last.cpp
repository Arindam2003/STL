#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={12,23,34};
    vector<int>::iterator it;
    it=v.end();
    v.insert(it,3,25);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}