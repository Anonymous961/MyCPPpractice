#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // int curr=0;
    // for(int i=0;i<n;i++){
    //     curr=0;
    //     for(int j=i;j<n;j++){
    //         curr+=a[j];
    //         if(curr==s){
    //             cout<<i+1<<" "<<j+1<<endl;
    //             return 0;
    //         }else if(curr>s){
    //             break;
    //         }
    //     }
    // }
    // cout<<"-1"<<endl;
    int i=0,j=0,st=-1,en=-1,sum=0;
    while(j<n && sum+a[j]<s){
        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<j+1<<endl;
        return 0;
    }
    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    return 0;     
}