#include<iostream>
using namespace std;
class Node {
 public:
int data;
Node* next;
 //public:
 Node(int val): data(val){
    next =nullptr;
}
 Node(){
}
friend ostream& operator<<(ostream& out, const Node& n){
    out<<n.data;
    return out;
}

void print(){
    cout<< data;
}
   };
   int main(){
    Node *a =new Node(10);
    Node *b=new Node(20);
    Node *c =new Node(30);
    (*a).next=b;
    a-> next =b;
    cout<< *a << endl;
        cout<< *b << endl;

            cout<< *c << endl;



    //Node n(10);
   // cout<<"hello"<<endl;
    //n.print();
   // cout<<endl;
  // cout<<n<< endl;    
    return 0;
   }

   void prepend(int v){
    Node *n =new Node(v);
    if(!  head){

    }
   }
   