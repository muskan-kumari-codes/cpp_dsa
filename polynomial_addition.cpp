#include<iostream>
using namespace std;
struct terms{
    int coeff;
    int expo;
};
int main(){
    terms p1[10], p2[10], p3[20];
    int n1, n2, n3=0;

    cout<<"enter number of terms in 1st polynomial : \n";
    cin>>n1;
    cout<<"enter coefficient and exponent : \n";
    for(int i=0; i<n1; i++){
        cin>>p1[i].coeff>>p1[i].expo;
    }

    cout<<"enter number of terms in 2nd polynomial : \n";
    cin>>n2;
    cout<<"enter coefficient and exponent : \n";
    for(int i=0; i<n2; i++){
        cin>>p2[i].coeff>>p2[i].expo;
    }

    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(p1[i].expo==p2[j].expo){
            p3[n3].coeff = p1[i].coeff + p2[j].coeff;
            p3[n3].expo = p1[i].expo;
            i++;
            j++;
            n3++;
        }else if(p1[i].expo > p2[j].expo){
            p3[n3] = p1[i];
            n3++;
            i++;
        }else{
            p3[n3] = p2[j];
            n3++;
            j++;
        }
    }
    while(i<n1){
        p3[n3] = p1[i];
        n3++;
        i++;
    }
    while(j<n2){
        p3[n3] = p2[j];
        n3++;
        j++;
    }

    cout<<"resulting polynomial \n";
    for(int i=0; i<n3; i++){
        cout<<p3[i].coeff<<"x^"<<p3[i].expo;
        if(i!=n3-1){
            cout<<" + ";
        }
    }
    return 0;
}
