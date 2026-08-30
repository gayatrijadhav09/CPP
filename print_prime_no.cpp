#include<iostream>
using namespace std;

bool prime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
	prime(20);
    int n = 20;

    for(int i = 2; i <= n; i++){
        if(prime(i)){
            cout << i << " ";
        }
    }

    return 0;
}
