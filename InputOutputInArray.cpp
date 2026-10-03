#include<iostream>
using namespace std;
int main(){
    //input output in an array...
    cout<<"enter the size"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
