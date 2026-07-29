/* A
   AB
   ABC
   ABCD  */

#include<iostream>
using namespace std;
int main(){
        //char ch='A';
        for(int i=1;i<=4;i++){
          char ch='A';      
		for(int j=1;j<=i;j++){
                        cout<<ch;
                        ch++;
                }
                cout<<endl;
        }
        return 0;
}

