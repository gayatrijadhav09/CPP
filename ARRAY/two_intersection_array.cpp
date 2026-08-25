#include<iostream>
using namespace std;
int main(){
	int arr1[]={1,2,3,5,9};
	int arr2[]={1,2,3,4,7};
	int n1=5;
	int n2=5;
	cout<<"intersection:";
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			if(arr1[i]==arr2[j]){
				cout<<arr1[i]<<" ";
				break;
			}
		}
	}
	return 0;
}
