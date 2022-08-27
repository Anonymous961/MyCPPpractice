#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
void towerofhanoi(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    towerofhanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<n<<endl;
    towerofhanoi(n-1,helper,dest,src);
}
int main(){
    towerofhanoi(3,'A','C','B');
    return 0;
}