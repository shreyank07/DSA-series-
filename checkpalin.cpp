#include<bits/stdc++.h>
using namespace std;
bool checkpalin(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    i++;
    j--;
    
    return checkpalin(str,i,j);
}

int main(){
    string str;
    cin>>str;
    int i=0;
    int j=str.length()-1;
    bool res=checkpalin(str,i,j);
    if(res){
        cout<<"yes its palindrome"<<endl;
    }
    else{
        cout<<"No its Not"<<endl;
    }

return 0;
}