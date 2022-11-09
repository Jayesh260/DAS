#include<bits/stdc++.h>
using namespace std;
int binarySearch(int array[],int x,int low,int high) {
  if (high>=low) {
    int mid=low+(high-low)/2;
    // If found at mid, then return it
    if(array[mid]==x)
      return mid;
    // Search the left half
    if(array[mid]>x)
      return binarySearch(array,x,low,mid-1);
    // Search the right half
    return binarySearch(array,x,mid+1,high);
  }
  return -1;
}
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
    int result=binarySearch(array,x,0,n);
  if (result==-1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
    return 0;
}