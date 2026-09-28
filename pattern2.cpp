#include<iostream>
using namespace std;

int main(){

   // pattern 1st.....
    cout<<"1st pattern"<<endl;
    int n;
    cout<<"enter a number : "<<endl;
    cin>>n;

    int i=1;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    cout<<endl<<endl;

   // pattern 2nd......
    cout<<"2nd pattern"<<endl;

   int a;
   cout<<"enter a number : "<<endl;
   cin>>a;

   int k=1;
   while(k<=a){
       int l=1;
       while(l<=a){
            cout<<l<<" ";
            l+=1;
       }
       k+=1;
       cout<<endl;
   }
}
