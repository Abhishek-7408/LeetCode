#include <iostream>
using namespace std;
int main(){
    int n;
cout<<"Enter Size of array\n";
cin>>n;
    cout<<"Enter array elements: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    cout<<arr[i];

    }
}