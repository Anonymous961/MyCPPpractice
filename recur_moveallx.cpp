#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
string moveallx(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=moveallx(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}
int main(){
    cout<<moveallx("axxbxfixbx")<<endl;
    return 0;
}