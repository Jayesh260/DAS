#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i = 0; i < n; i++){
        cin >> arr[i];
        }
    //insertion of element in array
    int pos;
    cin >> pos;
    int ele;
    cin >> ele;
    if(pos > n)
    cout << “Invalid Input”;
    else{
        for (i=n-1;i>=pos-1;i--)
        arr[i+1] = arr[i];
        arr[pos-1] = ele;
    cout << “Array after insertion is:\n”;
    for (i = 0; i <= n; i++)
    cout << arr[i] << ” “;
    }
    //deletion of array element 
    cout<<“\nEnter the position : “;
    cin>>position;
    if (position >= n+1)
    cout<<“\nDeletion not possible.\n”;
    else{
        for (c=position-1;c<n-1;c++)
        array[c]=array[c+1];
        cout<<“\nArray after deletion : “;
        for (c=0;c<n-1;c++)
        cout<<array[c]<< ” “;
        }
    cout << endl;
    return 0;
}