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
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"The sorted array is:"<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}