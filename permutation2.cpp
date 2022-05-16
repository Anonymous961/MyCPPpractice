#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
void helper(vi a,vector<vi>&ans,int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++){
        if(i!=idx and a[i]==a[idx]){
            continue;
        }
        swap(a[i],a[idx]);
        helper(a,ans,idx+1);
    }
}
vector<vi> permute(vi nums){
    sort(nums.begin(),nums.end());
    vector<vi>ans;
    helper(nums,ans,0);
    return ans;
}
int32_t main(){
    int n;cin>>n;
    vi a(n);
    for(auto &i :a)
        cin>>i;
    vector<vi>res=permute(a);
    for(auto v : res){
        for(auto i : v)
            cout<<i<<" ";
        cout<<"\n";
    }

    return 0;
}