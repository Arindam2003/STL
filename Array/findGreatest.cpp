#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int ,10>a2;
    cout<<"Enter 5 number"<<endl;
    for(int i=0;i<a2.size();i++){
        cin>>a2.at(i);
    }
    int max=0;
    for(int i:a2){
        if(i>max){
            max=i;
        }
    }
    cout<<max<<endl;
    return 0;
}