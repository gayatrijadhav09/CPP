#include<iostream>
using namespace std;

	void printdigit(int n){
		while(n !=0){
			int digit =n%10;
			cout<<digit<< endl;
			n=n/10;
		}
	}
	int main(){
		int n=3568;
		printdigit(n);
		return 0;
	}
