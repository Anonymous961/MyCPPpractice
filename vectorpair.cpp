#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(69);
    v.push_back(6);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }// 1 69 6
    cout<<endl;

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }// 1 69 6
    cout<<endl;

    for(auto ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    v.pop_back(); //1 69
    vector<int> v2 (3,50);
    //50 50 50

    swap(v,v2);
    for(auto ele:v){
        cout<<ele<<" ";
    }cout<<endl;

    for(auto ele:v2){
        cout<<ele<<" ";
    }cout<<endl;

    v={12,34,23,69,56};
    sort(v.begin(),v.end());
    for(auto e:v){
        cout<<e<<" ";
    }cout<<endl;
    return 0;
}