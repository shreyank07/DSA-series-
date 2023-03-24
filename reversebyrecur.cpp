#include<bits/stdc++.h>
using namespace std;

void revestr(string &str,int i,int j){
    cout<<str<<endl;
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    revestr(str,i+1,j-1);
} 
int main(){
    string str;
    cin>>str;
    int i=0;
    int j =str.length()-1;
    revestr(str,i,j);
    cout<<str<<endl;
return 0;
}