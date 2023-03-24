#include<bits/stdc++.h>
using namespace std;
#define Max_limit 100
class Stack{
    public:
    int arr[Max_limit];
    int top;
    Stack(){
         top=-1;
    }
    void push(int data){
        if(top==Max_limit){
            cout<<"Stack overflow"<<endl;
            return;
        }
        else{
            arr[++top]=data;
        }

    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            return;
        }
        else{
            cout<<arr[top]<<" popped out"<<endl;
            top--;
        }
    }
    void traverse(){
        int a=top;
        while(a>-1){
            cout<<arr[a]<<endl;
            a--;
        }
    }
    void peek(){
        if(top==-1){
            cout<<"kya dekhega ? kuch nhi hai"<<endl;
            return;
        }
        else{
            cout<<arr[top]<<endl;
        }
    }

};

int main(){
 Stack* s=new Stack();
 s->push(10);
 s->push(20);
 s->push(30);
 s->traverse();
 s->pop();
 s->traverse();
 s->peek();
return 0;
}