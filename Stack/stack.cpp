// LIFO (Last In First Out)/ FILO (First In Last Out)
/*
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    stack <int> s;
    s.push(1);   // push
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<"The element on the top of stack : "<<s.top()<<endl; // top

    s.pop();  // pop
    cout<<"The element of stack after pop(delete) the top element : "<<s.top()<<endl;

    if(s.empty()){                  // empty
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }

    while(s.size() >0){   //(s.empty()==false)
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    if(s.empty()){                  // empty
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}           */

                    // Stack Implementation Vector
/*
#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        vector<int> vec;
    public: 
        // push
        void push(int data){
            vec.push_back(data);
            return ;
        }
        //pop
        void pop(){
            if(vec.size() == 0){
                cout<<"Stack Underflow"<<endl;
                return ;
            }
            vec.pop_back();
            return ;
        }
        // top
        int top(){
            if(vec.size()==0){
                cout<<"Stack underflow"<<endl;
                return -1;
            }
            return vec[vec.size()-1];
        }
        // empty
        bool empty(){
            // return vec.size()==0;
            if(vec.size()==0)
            return true;
            
            return false;
        }
};
int main(){
    Stack s;
    for(int i=0;i<10;i++){
        s.push(i+1);
    }
    cout<<"The element on top of stack is : "<<s.top()<<endl;

    if(s.empty() == false){
        cout<<"Stack is not empty."<<endl;
    }else{
        cout<<"Stack is empty."<<endl;
    }

    s.pop();
    cout<<"The element of stack after delete the top element is : "<<s.top()<<endl;

    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}               */

                        // Stack Implementation using LinkedList
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node*next = NULL;

        // Constructor
        node(int d){
            data = d;
            next = NULL;
        }
};

class Stack{
    private:
        node* head;
    public:
        Stack(){
            head = NULL;
        }

        void push(int data){
            node* n = new node(data);
            n->next = head;
            head=n;
        }

        void pop(){
            if(head==NULL){
                cout<<"Kya Tapleek hai bhai"<<endl;
            }
            node* n = head;
            head = head->next;
            delete n;
        }

        int top(){
            if(head == NULL){
                cout<<"Kya Tapleek hai bhai"<<endl;
                return -1;
            }

            return head->data;
        }

        bool empty(){
            return head == NULL;
            // if(head == NULL)
            // return true;

            // return false;
        }
};


int main(){
    Stack s;
    for(int i=0;i<6;i++){
        s.push(i+1);
    }

    cout<<"The element on top of stack is : "<<s.top()<<endl;

    s.pop();
    cout<<"The element of stack is after delete the top of element : "<<s.top()<<endl;

    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    if(s.empty()==false){
        cout<<"Stack is not empty"<<endl;
    }else{
        cout<<"Stack is empty"<<endl;
    }
    cout<<s.top()<<endl;
    s.pop();
    return 0;
}               */

                        // Balanced Paranthesis
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack <char> S;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i] == '('||s[i] == '{'||s[i] == '['){
        S.push(s[i]);
        }
        else if (!S.empty() && s[i] == ')' && S.top() == '(')
        S.pop();
        else if (!S.empty() && s[i] == '}' && S.top() == '{')
        S.pop();
        else if (!S.empty() && s[i] == ']' && S.top() == '[')
        S.pop();
        else
        return false;
    }
    if(S.empty() == false){
        cout<<"It is not balanced Paranthesis"<<endl;
    }else{
        cout<<"It is balanced Paranthesis"<<endl;
    }
    return 0;
}                       */

                        // NGR (Nearest Greater Element to right || Next Greater Element to right || )
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans(n,-1);
    stack<int>s;
    s.push(arr[n-1]) , ans[n-1] = -1;
    for(int i=n-2;i>=0;i--){
    while(!s.empty() && s.top()<=arr[i]){
        s.pop();
    }
    ans[i] = s.empty()?-1:s.top();
    s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}           */
/*
#include<bits/stdc++.h>
using namespace std;
void NGR(vector<int>& arr , int n){
    vector<int>ans(n);
    stack<int>s;
    s.push(n-1);
    ans[n-1] = -1;
    for(int i=n-2;i>=0;i--){
    while(!s.empty() && arr[s.top()]<=arr[i]){
        s.pop();
    }
    ans[i] = s.empty()?-1:arr[s.top()];
    s.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    NGR(arr,n);
    return 0;
}                   */

                        // NGL (Nearest Greater Element to Left  || Next Greater Element to left)
/*
#include<bits/stdc++.h>
using namespace std;
void NGL(vector<int>& arr,int n){
    vector<int>ans(n);
    stack<int>s;
    s.push(0);
    ans[0] = -1;
    for(int i=1;i<n;i++){
    while(!s.empty() && arr[s.top()]<=arr[i]){
        s.pop();
    }
    ans[i] = s.empty()?-1:arr[s.top()];
    s.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    NGL(arr,n);
    return 0;
}                           */
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans(n,-1);
    stack<int>s;
    s.push(arr[0]) , ans[0] = -1;
    for(int i=1;i<n;i++){
    while(!s.empty() && s.top()<=arr[i]){
        s.pop();
    }
    ans[i] = s.empty()?-1:s.top();
    s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}                   */

                        // NSL (Nearest Smaller to Left)
/*
#include<bits/stdc++.h>
using namespace std;
void NGL(vector<int>& arr,int n){
    vector<int>ans(n);
    stack<int>s;
    s.push(0);
    ans[0] = -1;
    for(int i=1;i<n;i++){
    while(!s.empty() && arr[s.top()]>=arr[i]){
        s.pop();
    }
    ans[i] = s.empty()?-1:arr[s.top()];
    s.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    NGL(arr,n);
    return 0;
}               */


                // NSR (Nearest smaller to Right)
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans(n,-1);
    stack<int>s;
    s.push(arr[n-1]) , ans[n-1] = -1;
    for(int i=n-2;i>=0;i--){
    while(!s.empty() && s.top()>=arr[i]){
        s.pop();
    }
    ans[i] = s.empty()?-1:s.top();
    s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}               */


                        // Histogram

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}