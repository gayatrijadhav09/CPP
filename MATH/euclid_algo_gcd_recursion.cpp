#include<iostream>
using namespace std;
int gcdrec(int a,int b){
        if(b==0) return a;
	return gcdrec(b,a%b);
}
               
int main(){
        cout<<gcdrec(20,28)<<endl;
        return 0;
}

