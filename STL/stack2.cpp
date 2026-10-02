#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
stack<int>s2;
s2.swap(s);
    cout <<"s.size:"<<s.size()<<endl;
    cout<<"s.size:"<<s2.size()<<endl;

    return 0;
}
