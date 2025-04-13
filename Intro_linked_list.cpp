#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// struct Node{
//     public:
//     int data;
//     Node* next;
//     public:
//     Node(int data1,Node* next1){
//         data = data1;
//         next = next1;
//     }
//     public:
//     Node(int data1){
//         data = data1;
//         next = nullptr;

//     }
// };

// int main(){
//     vector<int> arr = {2,5,8,6,3,7,5};
//     Node* y  = new Node(arr[0]);
//     cout<<y->next<<endl;
//     return 0;
// }


// insted of struct we can use class

// class Node{
//     public:
//     int data;
//     Node* next;
//     public:
//     Node(int data1,Node* next1){
//         data = data1;
//         next = next1;
//     }
//     public:
//     Node(int data1){
//         data = data1;
//         next = nullptr;

//     }
// };

// int main(){
//     vector<int> arr = {2,5,8,6,3,7,5};
//     Node* y  = new Node(arr[0]);clearjgit 
//     cout<<y->data<<endl;
//     return 0;
// }



// creating linked list

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
// traversal of linked list after convert to linked list
Node* convert_into_linked_list(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    int n = arr.size();
    for(int i=0; i<n; i++){
        Node* tamp = new Node(arr[i]);
        mover->next = tamp;
        mover = tamp;

    }
    return head;

};
// calculate the length of the linked list
int length_of_linked_list(Node* head){
    int counter = 0;
    Node* tamp = head;
    while(tamp){
        cout<<tamp->data<<" ";
        tamp = tamp->next;
        counter++;
    }
    return counter;

}
bool check_element(Node* head, int val){
    Node* tamp = head;
    while(tamp){
        if(tamp->data == val){
            return true;
        }
        tamp = tamp->next;
    }
    return false;
}
int main(){
    vector<int> arr = {2,5,4,8,9};
    Node* head = convert_into_linked_list(arr);
    // Node* tamp = head;
    // while(tamp){
    //     cout<<tamp->data<<" ";
    //     tamp = tamp->next;

    // }
    
    cout<<length_of_linked_list(head)<<endl;
    cout<<check_element(head, 2);

    
    
}
