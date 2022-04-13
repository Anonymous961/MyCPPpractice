#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
void rev(string s){
    if(s.size()==0){
        return;
    }
    string ros=s.substr(1);
    rev(ros);
    cout<<s[0];
}
int main(){
    string a;
    cin>>a;
    rev(a);
    return 0;
}