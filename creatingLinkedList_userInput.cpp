#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main(){
    Node *head = nullptr;
    Node *temp;
    Node *newNode;

    int n,value;
    cout<<"enter number of nodes \n";
    cin>>n;
    cout<<"enter the vales of nodes \n";
    for(int i=0; i<n; i++){
        newNode = new Node;

        cin>>value;
        newNode->data = value;
        newNode->next = nullptr;
        if(head==nullptr){
            head = newNode;
        }else{
            temp = head;
            while(temp->next!=nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }

    }

    //display..
    cout<<"\n linked list : ";
    temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}

