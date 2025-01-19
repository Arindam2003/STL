#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> a1 = {1, 2, 3, 10, 23};
    array<int, 5>::reverse_iterator it;
    for (it = a1.rbegin(); it != a1.rend(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}