#include<bits/stdc++.h>
using namespace std;

int getbit(int n,int pos){
    return((n &(1<<pos))!=0);
}
int setbit(int n,int pos){
    return (n|(1<<pos));
}
int clearbit(int n,int pos){
    int notbitmask;
    notbitmask=~(1<<pos);
    return(notbitmask & n);
}
int main(){
    //cout<<getbit(5,2)<<endl;
    //cout<<setbit(5,1)<<endl;
    cout<<clearbit(5,2)<<endl;
    return 0;
}