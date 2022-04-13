#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_water=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                max_water=max(max_water,(j-i)*arr[i]);
            }
            else{
                max_water=max(max_water,(j-i)*arr[j]);
            }
        }
    }
    cout<<max_water<<endl;
    return 0;
}