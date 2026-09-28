#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l={1,2,3,4};
    cout << "List: ";
    for(int x : l)
        cout << x << " ";

 
    return 0;
}
