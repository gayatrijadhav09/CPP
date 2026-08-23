#include<iostream>
using namespace std;
int main(){
        int num[]={5,2,9,-20,45};
        int size=5;
        int largest=num[0];
        for(int i=0;i<size;i++){
                if(num[i]>largest){
                        largest=num[i];
                }
	}
        cout<<largest<<endl;
	return 0;
}
