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
node* mergeTwoLists(node* L1, node* L2) {
        node* temp;
        node* tail = temp;
        
        while (L1 && L2) {
            if (L1->data < L2->data) {
                tail->next = L1;
                L1 = L1->next;
            } else {
                tail->next = L2;
                L2 = L2->next;
            }
            tail = tail->next;
        }
        
        tail->next = L1 ? L1 : L2;
        return temp->next;
    }
node* mergeKLists(vector<node*>& lists) {
        if (lists.empty()) return nullptr;
        return mergeKListsHelper(lists, 0, lists.size() - 1);
    }
    
    node* mergeKListsHelper(vector<node*>& lists, int start, int end) {
        if (start == end) {
            return lists[start];
        }
        
        int mid = start + (end - start) / 2;
        node* left = mergeKListsHelper(lists, start, mid);
        node* right = mergeKListsHelper(lists, mid + 1, end);
        return mergeTwoLists(left, right);
    }
void print(node* head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main() {
    int k;
    cin >> k;
    vector<node*> lists(k, NULL);
    for (int i = 0; i < k; ++i) {
        lists[i] = buildLinkedlist();
    }
    node* result = mergeKLists(lists);
    print(result);
    return 0;
}