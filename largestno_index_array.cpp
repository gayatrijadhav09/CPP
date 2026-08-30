#include<iostream>
using namespace std;
int main(){
        int num []={19,20,38,84,5,6};
        int size=6;
        int large=num[0];
        int largeindex=0;
        for(int i=0;i<size;i++){
                if(num[i]>large){
                        large=num[i];
                        largeindex=i;
                }
        }
        cout<<largeindex<<endl;
        return 0;
}
                                                                                                                                                    
                                                                                                                         
