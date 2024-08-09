                // Queue implementation through array
/*
#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:
        int *arr;
        int f;
        int end;
        int cs;  // Current Size of Queue
        int n;    // Capacity of Queue
    public:
        Queue(int size){
            arr = new int[size];
            n = size;
            f = 0;
            end = size-1;
            cs = 0;
        }

        void push(int data){
            if(cs<n){
            end = (end+1)%n;        // move end
            arr[end] = data;
            cs++;
            }else{
                cout<<"Overflow"<<endl;
            }
        }

        void pop(){
            if(cs>0){
                f = (f+1)%n;   // front ko aage move kr do
                cs--;
            }else{
                cout<<"underflow"<<endl;
            }
        }

        int front(){
            if(cs==0){
                cout<<"Underflow"<<endl;
                return -1;
            }
            return arr[f];
        }

        bool empty(){
            return cs==0;
        }
        int size(){
            return cs;
        }
};
int main(){
     Queue q(5);
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     q.pop();
     q.push(5);
     q.push(6);

     cout<<"Size of Queue that is (how many elements in Queue) : "<<q.size()<<endl;
     while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
     }
//////////////////////////////////////
    // int n,x;
    // cin>>n;
    // Queue q(n);
    // for(int i=0;i<n;i++){
    //     cin>>x;
    //     q.push(x);
    // }
    //  cout<<q.size()<<endl;
    //  while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    //  }          
    return 0;
}                                           */

                                       //  Queue implementation through LinkedList
/*
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int data){
            this->data = data;
            next = NULL;
        }
};
class Queue{
    private:
        node *head;
        node *tail;
        int cs;  // Current Size of Queue
    public:
        Queue(){
            head = NULL;
            tail = NULL;
            cs = 0;
        }

        void push(int data){
            if(head==NULL){
                node* n = new node(data);
                head = n;
                tail = n;
                cs++;
            }else{
                node* n = new node(data);
                tail->next=n;
                tail=n;
                cs++;
            }
        }

        void pop(){
            if(head == NULL){
                cout<<"Underflow"<<endl;
            }else{
                node* temp = head;
                head = head->next;
                delete temp;
                cs--;
            }
        }

        bool empty(){
            return head == NULL;
        }

        int size(){
            return cs;
        }

        int front(){
            if(head==NULL){
                cout<<"Underflow"<<endl;
                return -1;
            }
            return head->data;
        }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}               */

                                        // Implementation Stack using Queue

#include <bits/stdc++.h>
using namespace std;

class StackUsingQueue{
    public:
        queue<int>q1,q2;
        void push(int a){
            q2.push(a);
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            swap(q1,q2);
        }
        void pop(){
            q1.pop();
        }
        int size(){
            return q1.size();
        }
        bool empty(){
            return q1.size()==0;
        }
        int top(){
            return q1.front();
        }
};
int main(){
    StackUsingQueue s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;
    s.pop();
    s.push(40);
    cout<<s.top()<<endl;
    return 0;
}