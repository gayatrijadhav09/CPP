#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter a:\n";
	cin>>a;
	cout<<"enter b:\n";
	cin>>b;
	cout<<"enter c:\n";
	cin>>c;
        if(a>b && a>c){
		cout<<a<<"is greater";
	}
	if(b>a && b>c){
		cout<<b<<"is greater";
	}
	if(c>a && c>b){
		cout<<c<<"is greater";
	}
	return 0;
}
