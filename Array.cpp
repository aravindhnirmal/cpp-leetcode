//#Arrays 1D - Array insertion
#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int pos;
    cin>>pos;
    int ele;
    cin>>ele;
    for(int i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    size++;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

