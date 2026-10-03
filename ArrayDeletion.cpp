#include<iostream>
using namespace std;
int main(){
    // deletion....
    int arr[10] = {1,2,3,4,5};
    int count = 0;
    for(int i:arr){
        if(i>0){
            count++;
        }
    }

    int pos;
    cout<<"enter the position for deletion : "<<endl;
    cin>>pos;
    for(int i=pos; i<count-1; i++){
        arr[i] = arr[i+1];
    }
    count--;

    for(int i=0; i<count; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
