#include<bits/stdc++.h>
using namespace std;
void allpermut(string str,int index,vector<string>& ans){
    if(index>=str.length()){
        ans.push_back(str);
        return;
    }
    for(int i=index;i<str.length();i++){
        swap(str[index],str[i]);
        
        allpermut(str,index+1,ans);
        
        swap(str[index],str[i]);
    }

}
int main(){
    string str;
    cin>>str;
    vector<string> ans;
    vector<int> output;
    int index=0;
    allpermut(str,index,ans);
    cout<<"\n";
    for(int i=0;i<ans.size();i++){        
        cout<<ans[i]<<" ";
    }
return 0;
}