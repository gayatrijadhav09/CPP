#include<iostream>
using namespace std;

int prime(int n){
    bool isprime = true;

    for(int i = 2; i < n-1; i++){
        if(n % i == 0){
            isprime = false;
            break;
        }
        else{
            isprime = true;
        }
    }

    if(isprime == true){
        cout << "prime";
    }
    else{
        cout << "not prime";
    }

    return 0;
}

int main(){
    prime(6);
    cout<<endl;
    return 0;
}

