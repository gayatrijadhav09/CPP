#include<iostream>
using namespace std;

bool even(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n = 20;

    for(int i = 1; i <= n; i++){
        if(even(i)){
            cout <<i << " ";
        }
    }   

    return 0;
}
