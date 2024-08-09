                    // Basic
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node*next;

        node(int data){
            this->data = data;
            this->next = NULL;
        }
};
// Insertion at end
node* insertion(){
            int val;
            cin>>val;
            node* head = NULL;
            node* tail = NULL;

            while(val>0){
                if(head==NULL){
                    node* n = new node(val);
                    head = n;
                    tail = n;
                }
                else{
                    node* n = new node(val);
                    tail->next = n;
                    tail = n;
                }
            }
            return head;
        }

void print(node*head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"null";
}

// 1-->2-->3-->NULL
int main(){
    node* head = insertion();
    print(head);
    return 0;
}                       */

                    // to input the value
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
};
int main(){
    node a,b;
    a.data = 1;
    a.next = NULL;
        
    // a.next = &b;

    b.data = 2;
    b.next = NULL;

    a.next = &b;
    cout<<a.data<<endl;
    cout<<a.next -> data<<endl;  // cout<<*(a.next)<<endl;
    cout<<a.data<<" ---> "<<a.next -> data<<" ---> NULL"<<endl;
    return 0;

}           */
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
};
int main(){
    node a,b,c;
    a.data = 1;
    a.next = NULL;
        
    b.data = 2;
    b.next = NULL;

    a.next = &b;
    c.data = 3;
    c.next = NULL;

    b.next = &c;
    cout<<a.data<<" ---> "<<a.next -> data<<" ---> "<<b.next -> data<<" ---> NULL"<<endl;
    return 0;

}           */

                    // INSERTION IN LINKEDLIST
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
    
        node(int data){
            this->data = data;
            this->next = NULL; 
        }
};
                        // Find length of linkedlist/////////////////////
int length(node* head){
    int l=1;
    node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        l++;
    }
    return l;
}
                    // Deletion at End /////////////////////
void DeletionAtEnd(node* &head,node*  &tail){
    if(head==NULL){
        cout<<"Kya tapleek hai"<<endl;
        return ;
    }
    else if(head->next == NULL){
        delete tail;  // delete head;(because both are same)
        tail == NULL;
        head == NULL;
    }
    else{
        node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
}
                    // Deletion at front /////////////////////
void DeletionAtFront(node* &head,node*  &tail){
    if(head==NULL){
        cout<<"Kya tapleek hai"<<endl;
        return ;
    }
    else if(head->next == NULL){
        delete head;
        tail == NULL;
        head == NULL;
    }
    else{
        node* temp = head;
        head = head->next;
        delete temp;
    }
}
                    // Deletion at Mid /////////////////////
void DeletionAtMid(node* &head,node*  &tail,int pos){
    int len = length(head);
    if(pos==0){
        DeletionAtFront(head,tail);
    }
    else if(pos >= len-1){
        DeletionAtEnd(head,tail);
    }
    else{
        node* temp = head;
        for(int i=1;i<=pos-1;i++){
            temp=temp->next;
        }
        node * n = temp->next;
        temp->next = n->next;
        delete n;
    }
}
                    // Insertion at End /////////////////////
void InsertionAtEnd(node* &head,node* &tail,int data){
    // 1-->2-->null
    if(head==NULL){
        node* n = new node(data); // n=100
        head = n;
        tail = n;
    }else{
        node* n = new node(data); // n=200
        tail->next = n;
        tail = n;
    }
}
                    // Insertion  at mid /////////////////////
void InsertionAtMid(node* head,node* tail,int pos,int data){
    node* temp = head;
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }
    node* n = new node(data);
    n->next = temp->next;
    temp->next = n;
}
                    // Insertion at front /////////////////////
void InsertionAtFront(node* &head,node* &tail,int data){
    if(head == NULL){
        node* n = new node(data);
        head = tail = n;
    }
    else{
        node* n = new node(data);
        n->next = head;
        head = n;
    }
}
                        // Print the linkedList//////////////
void print(node* head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    node* tail = NULL;
    // int n;
    // cin>>n;
    InsertionAtEnd(head,tail,1);
    InsertionAtEnd(head,tail,2);
    InsertionAtEnd(head,tail,3);
    InsertionAtEnd(head,tail,4);
    InsertionAtFront(head,tail,5);
    InsertionAtFront(head,tail,6);
    InsertionAtEnd(head,tail,5);
    InsertionAtMid(head,tail,2,20);
    InsertionAtMid(head,tail,6,32);
    cout<<"Print the Complete linkedList :"<<endl;
    print(head);
    cout<<"Print the Complete linkedList Length :"<<length(head)<<endl;
    DeletionAtFront(head,tail);
    cout<<"After Deletion the head :"<<endl;
    print(head);
    DeletionAtEnd(head,tail);
    cout<<"After Deletion the tail :"<<endl;
    print(head);
    DeletionAtMid(head,tail,5);
    cout<<"After Deletion at mid node :"<<endl;
    print(head);


    // cout<<"Insertion At end :"<<endl;
    // for(int i=0;i<n;i++){
    //     InsertionAtEnd(head,tail,i+1);
    //     InsertionAtFront(head,tail,i+1
    //     );
    // }

    return 0;
}               */             

                            // Reverse a linked list
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
    
        node(int data){
            this->data = data;
            this->next = NULL; 
        }
};
void InsertionAtFront(node* &head,node* &tail,int data){
    if(head == NULL){
        node* n = new node(data);
        head = tail = n;
    }
    else{
        node* n = new node(data);
        n->next = head;
        head = n;
    }
}
// I want to return the head of reversed linkedist
node* Reverse(node* head){
    node* prev = NULL;
    node* curr = head;
    node* nxt = curr->next;

    while(curr){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
void print(node* head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node * head = NULL;
    node * tail = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        InsertionAtFront(head,tail,i+1);
    }
    print(head);
    cout<<"After Reverse the linkedlist:"<<endl;
    // 
    node * temp = Reverse(head);
    print(temp);
    return 0;
}           */

                            // Middle LinkList
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int data){
            this->data = data;
            this->next = NULL; 
        }
};
void InsertionAtFront(node* &head,node* &tail,int data){
    if(head == NULL){
        node* n = new node(data);
        head = tail = n;
    }
    else{
        node* n = new node(data);
        n->next = head;
        head = n;
    }
}
int length(node* head){
    int l=0;
    node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        l++;
    }
    return l;
}
node* middle(node* head){
    int n = length(head),mid;
    mid = (n-1)/2;
    node* temp = head;
    for(int i=0;i<mid;i++){
        temp = temp->next;
    }
    return temp ;
}
void print(node* head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head = NULL;
    node* tail = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        InsertionAtFront(head,tail,n-i);
    }
    print(head);
    node * result = middle(head);
    cout<<"Middle Node: "<<result->data<<endl;
}               */     

                    // how to take linked list input from user
                    // Middle linklist by slow and fast pointers/flyod algorithum
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int data){
            this->data = data;
            this -> next = NULL;
        }
};

node* buildLinkedlist(){
    node* head = NULL;
    node* tail = NULL;

    int data;
    cin>>data;
    while(data!=-1){
        if(head == NULL){
            node* n = new node(data);
            head = n;
            tail = n;
        }else{
            node* n = new node(data);
            tail->next = n;
            tail = n;
        }
        cin>>data;
    }
    return head;
}
node* middle(node* &head){
    if(head==NULL || head->next ==NULL){
        return head;
    }
    node* slow = head;
    node* fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next; // for two steps move
    }
    return slow;
}
void print(node* head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head = buildLinkedlist();
    print(head);
    node*result = middle(head);
    if(result == NULL){
        cout<<"Middle doesn't exist"<<endl;
    }else{
    cout<<"Middle Node : "<<result->data<<endl;
    }
    return 0;
}               */

            // 9th July

