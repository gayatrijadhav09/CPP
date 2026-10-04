#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int arr[5]={4,3,5,6,7};
	sort(arr,arr+5);
for(int val:arr){
	cout<<val<<" " ;
}
	return 0;
}
