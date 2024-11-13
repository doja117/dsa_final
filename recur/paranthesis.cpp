#include<iostream>
#include<vector>
using namespace std;
#include<set>
#include<cstring>

void printVector(vector<string>v){for (auto x:v){cout<<x<<"\t";}cout<<"\n";}
 vector<string>ans={"()"};
string insertAtPos(string s, char c, int indx) {
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (i == indx) {
            ans += c;  // Insert character `c` at position `indx`
        }
        ans += s[i];
    }
    
    if (indx == s.size()) {  // If index is at the end, append `c`
        ans += c;
    }
    
    return ans;
}


void solve(int open,int close,vector<string>&ans){
    if (close==0){return;}
    if (open==0){
        while (close){
            for (int i=0;i<ans.size();i++){
                ans[i]+=')';
            }   close--;
        }   return;
    }
    if (open==close){
        for (int i=0;i<ans.size();i++){
            ans[i]+='(';
        }   solve(--open,close,ans);
    }
    if (open<close){
        for (int i=0;i<ans.size();i++){
            ans[i]+='(';
        }   solve(--open,close,ans);
      vector<string>flag;
      for (auto x:ans){flag.push_back(x);}
      for (int i=0;i<flag.size();i++){
        flag[i]+=')';
    }   for (auto x:flag){
        ans.push_back(x);
    }
       solve(open,--close,ans);
    }
}



vector<string>permutation(int n)
{
    vector<string>ans={""};
    if (n==0){return ans;}
    solve(n,n,ans);
    printVector(ans);
    return ans;
}






void solve(){
        vector<string>flag;
        for (auto x:ans){flag.push_back(x);}
        set<string>temp;
        vector<string>ffFLag;
        for (int i=0;i<flag.size();i++){
            for (int j=0;j<flag[i].size();j++){
                string s1=insertAtPos(flag[i],'(',j);
                for (int k=j+1;k<=s1.size();k++){
                    string s2=(insertAtPos(s1,')',k));
                    temp.insert(s2);
                }
            }
            // printVector(ffFLag);
            
        }  flag.clear();    cout<<flag.size()<<"\t";
        for (auto x:temp){
            flag.push_back(x);
        }   
        // printVector(flag);   
        ans=flag;   return;
    }
    vector<string> generateParenthesis(int n) {
        if (n==1){return ans;}
        int indx=1;
        while (indx!=n){
            solve();    indx++;
        }   return ans;
    }
#include<unordered_map>

int main(){
    auto x=permutation(5);
}
