#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
string removedup(string s){
    if (s.size()==0){
        return "";
    }
    char ch=s[0];
    string ans=removedup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);

}
int main(){
    cout<<removedup("aaaaabbbbccddee")<<endl;
    return 0;
}