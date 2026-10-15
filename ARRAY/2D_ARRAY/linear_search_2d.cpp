#include<iostream>
using namespace std;
bool linearsearch(int matrix[][3],int row,int cols,int key){
	for(int i=i;i<row;i++){
        for(int j=0;j<cols;j++){
if(matrix[i][j]==key){
	return true;
}
}
}
return false;
}

int main(){
        int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
        int row=4;
        int cols=3;
        cout<<linearsearch(matrix,row,cols,12)<<endl;
	return 0;
        }
        

