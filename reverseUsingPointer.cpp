#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n = 5;
    int* start = a;
    int* end = a+n-1;
    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;
        end--;
        start++;
    }

    int* p = a;
    while(p<a+n){
        cout<<*p<<" ";
        p++;
    }
    return 0;
}
