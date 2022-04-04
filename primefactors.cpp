#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
void primefactor(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;i<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                } 
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<endl;
        n/=spf[n];
    }
}

int main(){
    int n;
    cin>>n;
    primefactor(n);
    return 0;
}