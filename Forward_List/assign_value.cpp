#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> f;
    f.assign(3, 20);
    for (auto x : f)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}