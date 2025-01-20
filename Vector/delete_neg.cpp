#include<iostream>
#include<vector>
using namespace std;
void delete_neg(vector<int> *x)
{
    vector<int>::iterator it;
    for(it=x->begin();it!=x->end();it++){
        if(*it<0)
        {
            x->erase(it);
        }
    }
    
}
int main()
{
    vector<int> v={12,-23,34,-90,34};
    delete_neg(&v);
    for(auto x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}