#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[10] = {3,7,2,3,2,1,5,6,7,3};
    map<int,int> freq;

    for(int i=0; i<10; i++){
        freq[arr[i]]++;
    }
    return 0;
}
