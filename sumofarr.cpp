#include<bits/stdc++.h>
using namespace std;

int sumarr(int arr[],int n,int sum){
    if(n==0){
        return sum;
    }
    if(n==1){
    sum+=arr[0];
    return sum;
    }
    sum+=arr[0];
    return sumarr(arr+1,n-1,sum);
   

}



int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=sumarr(arr,n,sum);
    cout<<res<<endl;

return 0;
}