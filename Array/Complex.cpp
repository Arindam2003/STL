#include<iostream>
#include<array>
using namespace std;
class Complex{
    private:
        int a,b;
    public:
        void setValue(int a,int b){this->a=a;this->b=b;}
        void getValue(){cout<<a<<" "<<b<<endl;}
        Complex sum(Complex c)
        {
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};
int main()
{
    array<Complex,5>c1;
    cout<<"Enter 5 complex numeber:"<<endl;
    int p,q;
    for (auto &x:c1)
    {
        cin>>p>>q;
        x.setValue(p,q);
    }
    cout<<endl<<"Values are<<endl";
    for (auto& x:c1)
    {
        x.getValue();
    }
    return 0;
}