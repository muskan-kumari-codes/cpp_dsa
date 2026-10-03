#include<iostream>
using namespace std;
int main(){
    // insertion....
    int arr[10] = {1,2,3,4,5};
    int count = 0;
    for(int i:arr){
        if(i>0){
            count++;
        }
    }
    cout<<"enter the number "<<endl;
    int num;
    cin>>num;
    int pos;
    cout<<"enter the position for insertion : "<<endl;
    cin>>pos;
    for(int i=count; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = num;

    for(int i=0; i<=count; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
