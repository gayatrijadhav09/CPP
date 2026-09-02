#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxarea(vector<int> &height){
int maxwater=0;
for(int i=0;i<height.size();i++){
	for(int j=0;j<height.size();j++){
		int width=j-i;
		int higt=min(height[i],height[j]);
		int area=width*higt;
		maxwater=max(maxwater,area);
	}
}
return maxwater;
}
int main(){
	vector<int>height={1,8,6,2,5,4,8,3,7};
	cout<<"maxwater container:"<<maxarea(height)<<endl;
return 0;
}
//o(n)^2
