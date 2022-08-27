#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
int first(int arr[],int n,int i,int a){
    if (i==n){
        return -1;
    }
    if(arr[i]==a){
        return i;
    }
    return first(arr,n-1,i+1,a);
    
}
// int last(int arr[],int n,int i,int a){
//     if(n<0){
//         return -1;               //mine one
//     }
//     if(arr[n-1]==a){
//         return n-1;
//     }
//     return last(arr,n-1,i,a);
// }
int last(int arr[],int n,int i,int a){
    if(n==i){
        return -1;
    }
    int restarray=last(arr,n,i+1,a);
    if(restarray!=-1){
        return restarray;
    }
    if(arr[i]==a){
        return i;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }    
    int a;
    cin>>a;
    cout<<first(arr,n-1,0,a)<<endl;
    cout<<last(arr,n,0,a)<<endl;
    return 0;
}