#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
vector<vi>ans;
void permute(vi &a,int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}
int32_t main(){
    int n;cin>>n;
    vi a(n);
    for(auto &i : a)
        cin>>i;
    permute(a,0);
    for(auto v : ans){
        for(auto i : v)
            cout<<i<<" ";
        cout<<"\n";
    }
}