#include<iostream>
using namespace std;
int main(){
    //max element...
    int arr[10] = {1,2,3,4,55,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
    return 0;
}
