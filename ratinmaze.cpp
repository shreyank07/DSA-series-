#include<bits/stdc++.h>
using namespace std;
 bool isvalid(vector<vector<int>> arr,int x,int y,int m, int n,vector<vector<int>> &vis){
    if(arr[x][y]==1 && x<=n-1 && y<=m-1 && vis[x][y]!=1){
        return true;
    }
    return false;
 }
void findpaths(vector<vector<int>> arr,vector<string> &ans,int i,int j,int n,int m,string path,vector<vector<int>> vis){
    if(i==n-1 && j==m-1){
        ans.push_back(path);
        return;
    }
    if(isvalid(arr,i+1,j,m,n,vis)){
        path=path+'D';
        vis[i+1][j]=1;
        findpaths(arr,ans,i+1,j,n,m,path, vis);
        vis[i+1][j]=0;
        path.pop_back();
    }
    if(isvalid(arr,i,j+1,m,n,vis)){
        path=path+'R';
        vis[i][j+1]=1;
        findpaths(arr,ans,i,j+1,n,m,path, vis);
        vis[i][j+1]=0;
        path.pop_back();
    }
    if(isvalid(arr,i-1,j,m,n,vis)){
        path=path+'L';
        vis[i-1][j]=1;
        findpaths(arr,ans,i-1,j,n,m,path, vis);
        vis[i-1][j]=0;
        path.pop_back();
    }
    if(isvalid(arr,i-1,j,m,n,vis)){
        path=path+'U';
        vis[i-1][j]=1;
        findpaths(arr,ans,i-1,j,n,m,path, vis);
        vis[i-1][j]=0;
        path.pop_back();
    }
}
int main(){
    vector<vector<int>> arr;
    int n;
    int m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            int num;
            cin>>num;
            temp.push_back(num);
        }
        arr.push_back(temp);
    }
    string path;
    vector<string> ans;
    int i=0;
    int j=0;
    vector<vector<int>> vis;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            
            temp.push_back(0);
        }
        arr.push_back(temp);
    }
    findpaths(arr,ans,i,j,n,m,path,vis);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    
return 0;
}