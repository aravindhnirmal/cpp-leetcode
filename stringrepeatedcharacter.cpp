#include<iostream>
#include<string>
using namespace std;
int main(){
string ch;
cin>>ch;

for(int i=0;i<ch.length();i++){
    for(int j=i+1;j<ch.length();j++){
        if(ch==ch[j]){
            cout<<"same";
            break;
        }
    }
}
else{
    cout<<"not same";
}
} 
