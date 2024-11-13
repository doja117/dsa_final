#include<string>
using namespace std;
#include<vector>

vector<string>solve(vector<string>&ans,string c){
    if (c.size()==0){return ans;}
    string s(1,c[0]);
    vector<string>c1=ans;
    for (int i=0;i<ans.size();i++){ans[i]+=s;}
    for (auto x:c1){
        ans.push_back((x));
    };  return solve(ans,c.substr(1,c.size()));
}
using namespace std;
#include<algorithm>
#include<iostream>
void subset(string flag){
    vector<string>ans={""};
    sort(ans.begin(),ans.end());
    solve(ans,flag);
    cout<<ans.size()<<"\n";
    for (auto x:ans){cout<<x<<"\t";}cout<<"\n";

}

void solve(vector<vector<int>>&ans,vector<int>a){
    int x=a[0];
    if (!a.size()){return;}
    vector<vector<int>>flag=ans;
    for (int i=0;i<ans.size();i++){
        ans[i].push_back(x);
    }
    for (auto x:flag){
        ans.push_back(x);
    }
    return solve(ans,vector<int>(a.begin()+1,a.end()));

}
vector<vector<int>>subset(vector<int>&a){
    vector<vector<int>>ans;
    solve(ans,a);
}

void solve(vector<string>s){
    int i=0;    int j=i+1;
    char c1='(';    char c2=')';
}
vector<string>bracket(int n){
    string f="()";
    vector<string>ans={f};
    

}

int main(){
    
    string f;   cin>>f;
    
    subset(f);
}