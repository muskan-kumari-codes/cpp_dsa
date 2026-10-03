#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int num;
    cout<<"enter the number you want to  find"<<endl;
    cin>>num;
    for(int i=0; i<n; i++){
        if(arr[i]==num){
            cout<<num<<" found at index "<<i;
        }
    }
    return 0;
}
