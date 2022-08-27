#include<bits/stdc++.h>
using namespace std;
bool ispower2(int n){
    return (n && !(n & n-1));
}
int main(){
    int n;
    cin>>n;
    cout<<ispower2(n)<<endl;
    return 0;
    // int n;
    // cin>>n;
    // int pos=1;
    // int a=1;
    // while (true){
    //     a=1<<pos;
    //     if(n==a){
    //         cout<<"Yes!"<<endl;
    //         break;
    //     }
    //     else if(a>n){
    //         cout<<"No"<<endl;
    //         break;
    //     }
    //     pos++;
    // }
}