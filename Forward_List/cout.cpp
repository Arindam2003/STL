#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> l = {3, 29, 21, 51, 41, 52, 3, 23, 200};
    int number = 25;
    int count = 0;
    for (auto x : l)
    {
        if (x > number)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}