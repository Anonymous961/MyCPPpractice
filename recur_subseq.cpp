#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);
}
int main(){
    subseq("ABC","");
    cout<<endl;
    return 0;
}