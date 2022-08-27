#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int power(int n,int p){
    if(p==0){
        return 1;
    }
    return power(n,p-1)*n;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1)*n;
}
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int nfibo(int n,int a=0,int b=1){
    if(n==0){
        return 0;
    }
    cout<<a<<endl;
    return nfibo(n-1,b,a+b);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    cout<<power(2,n)<<endl;
    cout<<fact(n)<<endl;
    cout<<fibo(n)<<endl;
    cout<<endl;
    nfibo(n);
    return 0;
}