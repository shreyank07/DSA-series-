#include<bits/stdc++.h>
using namespace std;
// void powerset(vector<int> nums,vector<vector<int>> &ans,vector<int> &output,int index){
//     if(index>=nums.size()){
//         ans.push_back(output);
//         return;        
//     }
//     powerset(nums,ans,output,index+1);
//     int element=nums[index];
//     output.push_back(element);
//     powerset(nums,ans,output,index+1,n);
// }

    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int> >& ans) {
        //base case
        if(index >= nums.size()) {
            ans.push_back(output);
            return ;
        }
        
        //exclude
        solve(nums, output, index+1, ans);
        
        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);
        
    }
    

    void subsets(vector<int>& nums,vector<int> output,vector<vector<int>> &ans) {
        
        
        int index = 0;
        solve(nums, output, index, ans);
        
        
    }

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    vector<vector<int> > ans;
    vector<int> output;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    int index=0;
    subsets(nums,output,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout <<ans[i][j]<<" ";
        }
        cout<<"/";

    }
    
return 0;
}