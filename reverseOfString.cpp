#include<iostream>
using namespace std;
int main(){
    // reverse of string
    string s;
    cin>>s;
    for(int i=s.length()-1; i>=0; i--){
        cout<<s[i];
    }
    return 0;
}
