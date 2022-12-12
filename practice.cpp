#include<bits/stdc++.h>
typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<ll, ll>
#define mp make_pair
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
using namespace std;
void rev(string s){
    if(s.size()==0) {
        return;
    }
    if(s.substr(0,2)=="pi") {
        cout<<"3.14";
        rev(s.substr(2));
    }else{cout<<s[0];
    rev(s.substr(1));}
}


int main(){
    fastio();
    string s;
    cin>>s;
    rev(s);
    return 0;
}