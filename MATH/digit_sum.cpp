#include<iostream>
using namespace std;

        void printdigit(int n){
int sum=0;
                while(n !=0){
                        int digit =n%10;
                        sum+=digit;
                        n=n/10;
                }
                cout<<sum<<endl;


        }
        int main(){
                int n=3568;
                printdigit(n);
                return 0;
        }

