#include<bits/stdc++.h>
using namespace std;

 int facto(int  num){
    if(num==0){
        return 1;
    }
    return num*facto(num-1);
 }
int main(){
    int n;
    cin>>n;
    int res=facto(n);
    cout<<res<<endl;
return 0;
}