#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of variables"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key:"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"the element is fouund at the index "<<i<<endl;
            break;
        }
    }
    return 0;
}