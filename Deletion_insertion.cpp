#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
        
    }
    public:
    Node(int data2){
        data = data2;
        next = nullptr;
    }

};

Node* Convert_linked_list(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* tamp = new Node(arr[i]);
        mover->next = tamp;
        mover = tamp;
    }
    return head;



};

void traversal_linked_list(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    
}

Node* remove_head(Node* head){
    if(head== NULL) return head;
    Node* tamp = head;
    head = head->next;
    delete tamp;
    return head;
}

Node* delete_tails(Node* head){
    if(head==NULL || head->next == NULL) return NULL;
    Node* tamp = head;
    while(tamp->next->next!=NULL){
        tamp = tamp->next;
    }
    free(tamp->next);
    tamp->next = nullptr;
    return head;

}

Node* removefrom_kth_position(Node* head, int k){
    if(head == NULL)  return head;
    if(k==1){
        Node* tamp = head;
        head = head->next;
        free(tamp);
        return head;
    }
    int cnt = 0;
    Node* pre = NULL;
    Node* tamp = head;
    while(tamp!=NULL){
        cnt++;
        if(cnt==k){
            pre->next = pre->next->next;
            free(tamp);
            break;
        }
        pre = tamp;
        tamp = tamp->next;

    }
    return head;
}


int main(){
    vector<int> arr = {2,8,5,6,9};
    Node* head = Convert_linked_list(arr);
    // cout<<head->data;
    // traversal_linked_list(head);
    // head = remove_head(head);
    // traversal_linked_list(head);

    // Delete tail of the linked list

    // head = delete_tails(head);
    // traversal_linked_list(head);

    // delete from any position
    head = removefrom_kth_position(head, 3);
    traversal_linked_list(head);


}