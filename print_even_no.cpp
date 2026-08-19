#include<iostream>
using namespace std;

bool odd(int n){
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
        if(odd(i)){
            cout << i << " ";
        }
    }

    return 0;
}
