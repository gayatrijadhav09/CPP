#include <iostream>
#include <deque>
using namespace std;

int main()
{
pair<int ,pair<int ,char>>p={1,{2,'a'}};
cout<< p.first<<endl;
cout<<p.second.first<<endl;
return 0;
}

