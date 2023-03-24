#include<bits/stdc++.h>
using namespace std;
int getindex(int arr[],int n, int target,int count){
    if(n==0){
       return -1;
    }
    if(arr[0]==target){
        return count;
    }
    return getindex(arr+1,n-1,target,count+1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int res=getindex(arr, n, target,count);
    if(res==-1){
        cout<<"target not fount";
        return 0;
    }
    cout<<"the target is found at index "<<res<<endl;
return 0;
}