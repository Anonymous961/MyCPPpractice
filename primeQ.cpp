<<<<<<< HEAD
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=0;
    for (int i=2;i<sqrt(n);i++){
        if (n%i==0){
            cout<<"composite";
            flag=1;
            break;
        }
    }
    if (flag==0){
        cout<<"prime";
    }
    return 0;
=======
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=0;
    for (int i=2;i<sqrt(n);i++){
        if (n%i==0){
            cout<<"composite";
            flag=1;
            break;
        }
    }
    if (flag==0){
        cout<<"prime";
    }
    return 0;
>>>>>>> master
}