#include<iostream>
using namespace std;
int product(int arr[],int size){
int product=1;
for(int i=0;i<size;i++){
	product=product*arr[i];
}
cout<<product<<endl;
return 0;
}
int main(){
	int arr[]={1,2,3,4,5};
	int size=5;
	product(arr,size);
	return 0;
}
