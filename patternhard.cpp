<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        int s=n*2-i*2;
        for (int j=1;j<=s;j++){
            cout<<"  ";
        }
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i=n;i>0;i--){
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        int s=n*2-i*2;
        for (int j=1;j<=s;j++){
            cout<<"  ";
        }
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
=======
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        int s=n*2-i*2;
        for (int j=1;j<=s;j++){
            cout<<"  ";
        }
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i=n;i>0;i--){
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        int s=n*2-i*2;
        for (int j=1;j<=s;j++){
            cout<<"  ";
        }
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
>>>>>>> master
}