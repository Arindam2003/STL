#include<iostream>
#include<vector>
using namespace std;
int mini(int x,int y)
{
    if(x<y)
    {
        return x;
    }
    else{
        return y;
    }
}
vector<int> adjacent(vector<int> v1)
{
    vector<int>v2;
    for(int i=0;i<v1.size()-1;i++)
    {
        v2.push_back(mini(v1[i],v1[i+1]));
    }
    return v2;
}
int main()
{
    vector<int>store, v={3,2,1,2,32,3};
    store=adjacent(v);
    for(auto x: store)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}