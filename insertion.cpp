<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size :";
    cin>>n;
    int arr[n];
    cout<<"enter elements : ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
=======
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size :";
    cin>>n;
    int arr[n];
    cout<<"enter elements : ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
>>>>>>> master
}