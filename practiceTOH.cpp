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

void soln(int n,char a,char b,char c){
    if(n==0) return; 
    soln(n-1,a,c,b);
    cout<<"Move from "<<a<<" to "<<c<<endl;
    soln(n-1,b,a,c);
}

int main(){
    fastio();
    int n;
    cin>>n;
    soln(n,'A','B','C');
    return 0;
}