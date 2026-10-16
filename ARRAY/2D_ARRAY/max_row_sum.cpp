#include<iostream>
#include <climits>
using namespace std;
int maxsum(int matrix[][3],int row,int cols){
    int maxrowsum=INT_MIN;
    for(int i=0;i<row;i++){
	    int rowsum=0;
	    for(int j=0;j<cols;j++){
		    rowsum+=matrix[i][j];
	    }
	    maxrowsum=max(maxrowsum,rowsum);
    }
    return maxrowsum;
}


int main(){
        int matrix[3][3]={{1,2,3},{7,8,9},{10,11,12}};
        int row=3;
        int cols=3;
        cout<<maxsum(matrix,row,cols)<<endl;
        return 0;
        }

