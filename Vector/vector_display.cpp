#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
    v1={2,3,4,90,12};
    //using subscript operator
    /*
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";    
    }
    */
    
    // usign at methode
/*
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<<" ";
    }
    */
    // Using implicite Operator
/*
    for(auto x:v1)
    {
        cout<<x<<" ";
    }
*/
    // using explicit iterator

    vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}