
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
            node(int data){
                this->data=data;
                left=NULL;
                right=NULL;
            }
};
node*BuildTree(){
    int data;
    cin>>data;
    // data == -1 (Base case)
    if(data==-1){
        return NULL;
    }
    // root node ko banane ka kaam mera h
    node*root=new node(data);
    // recursion Left subtree ko bana kr de dega
    root->left=BuildTree();

    // recursion Right subtree ko bana kr de dega
    root->right=BuildTree();

    return root;
}
void  print(node* root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main(){
    node*root=BuildTree();
    print(root);
    return 0;
}                   */


                    // Preorder(root,left,right) printing in binary tree
                    // Postorder(root,left,right) printing in binary tree
                    // Inorder(root,left,right) printing in binary tree
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
            node(int val){
                this->data=val;
                left=NULL;
                right=NULL;
            }
};
node*BuildTree(){
    int data;
    cin>>data;
    // data == -1 (Base case)
    if(data==-1){
        return NULL;
    }
    node*root=new node(data);
    // recursion Left subtree ko bana kr de dega
    root->left=BuildTree();

    // recursion Right subtree ko bana kr de dega
    root->right=BuildTree();

    return root;
};
void PreOrder(node* root){
    if(root == NULL)
        return ;
    // root ---> LST ---> RST --->
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void PostOrder(node* root){
    if(root == NULL)
        return ;
    // LST ---> RST ---> root --->
    PreOrder(root->left);
    PreOrder(root->right);
    cout<<root->data<<" ";
}
void InOrder(node* root){
    if(root == NULL)
        return ;
    // LST ---> root ---> RST --->
    PreOrder(root->left);
    cout<<root->data<<" ";
    PreOrder(root->right);
}
void  print(node* root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main(){
    node*root=BuildTree();
    cout<<"Binary Tree : ";
    print(root);
    cout<<endl<<"Pre Order Traversal: ";
    PreOrder(root);
    cout<<endl<<"Post Order Traversal: ";
    PostOrder(root);
    cout<<endl<<"In Order Traversal: ";
    InOrder(root);
    return 0;
}           */

                    // Count no. of nodes in a Binary Tree
/*
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
        node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};
node*BuildTree(){
    int data;
    cin>>data;
    // data == -1 (Base case)
    if(data==-1){
        return NULL;
    }
    node*root=new node(data);
    root->left=BuildTree();
    root->right=BuildTree();

    return root;
};
int countNodes(node* root){
    if(root == NULL)
    return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}
int main(){
    node*root=BuildTree();
    cout<<"Total node in binary tree: ";
    cout<<countNodes(root);
}                   */

                        // Height of Binary Tree
/*
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
        }
};
node*BuildTree(){
    int data;
    cin>>data;
    if(data == -1)
    return NULL;
    node*root=new node(data);
    root->left=BuildTree();
    root->right=BuildTree();

    return root;
};
int height(node* root){
    if(root == NULL)
        return 0;
    return 1+ max(height(root->left),height(root->right));
};
int main(){
    node*root=BuildTree();
    cout<<"Height of Binary Tree: ";
    cout<<height(root);
    return 0;
}                           */

                        // Min depth of Binary Tree
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
node*BuildTree(){
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    node*root=new node(data);
    root->left=BuildTree();
    root->right=BuildTree();

    return root;
};
int minDepth(node*root){
        if (root == NULL)
            return 0;
        if (root->left == NULL)
            return 1 + minDepth(root->right);
        if (root->right == NULL)
            return 1 + minDepth(root->left);

        int h1 = minDepth(root->left);
        int h2 = minDepth(root->right);

        return 1 + min(h1, h2);
}
            // Another method
// int solve(node* root){
//     if(root==NULL)
//     return INT_MAX;
//     if(root->left==NULL && root->right==NULL)
//     return 1;
//     return 1+ min(solve(root->left),solve(root->right));
// }
// int minDepth(node* root){
//     if(root==NULL)
//     return 0;
//     return solve(root);
// }
int main(){
    node* root = BuildTree();
    cout<<"Depth of Binary Tree: "<<minDepth(root);
    return 0;
}               */

                            // Check the tree is identical or not
/*
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;
        node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};
node*BuildTree(){
    int data;
    cin>>data;
    if(data == -1)
    return NULL;
    node*root = new node(data);
    root->left = BuildTree():
    root->right = BuildTree();

    return root;
};
bool isSameTree(node* p , node* q){
    if(p == NULL && q == NULL)
        return true;
    if(p == NULL || q == NULL)
        return false;
    bool l = isSameTree(p->left,q->left);
    bool r = isSameTree(p->right,q->right);
    if(p->data == q->data && l && r){
        return true;
    }
    return false;
}
int main(){
    node*p = BuildTree();
    node*q = BuildTree();
    if(isSameTree(p,q))
     cout<<"Identical Tree";
     else
     cout<<"Not Identical Tree";
    return 0;
}                   */

                            // Check binary tree is symmetric or not
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node*left;
    node*right;
    node(int data){
        this->val=data;
        this->left=NULL;
        this->right = NULL;
    }
};
node* BuildTree(){
    int data;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root  = new node(data);
    root->left = BuildTree();
    root->right = BuildTree();

    return root;
}
bool check(node* r1, node* r2){
    if(r1 == NULL && r2 == NULL){
        return true;
    }if(r1 == NULL || r2 == NULL){
        return false;
    }
bool l = check(r1->left,r2->right);
bool r = check(r1->right,r2->left);
    if(l && r && r1->val == r2->val)
    return true;
return false;
}
bool isSymmetric(node* root) {
    if(root == NULL)
    return true;
    node* r1 = root->left;
    node* r2 = root->right;
    return check(r1,r2);
}
int main(){
    node* root = BuildTree();
    if(isSymmetric(root)){
        cout<<"Yes,This Tree is Symmetric."<<endl;
    }else{
        cout<<"No,This Tree is not Symmetric."<<endl;
    }
    return 0;
}           */

                            // Check pathSum is true or not
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int val;
        node* left;
        node* right;
        node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
node* BuildTree(){
    int data;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    root->left = BuildTree();
    root->right = BuildTree();

    return root;
};
bool hasPathSum(node* root, int targetSum) {
    if(root == NULL)
        return false;
    if(root->left == NULL && root->right == NULL){
        if(targetSum-root->val == 0)
            return true;
    }
    bool l = hasPathSum(root->left,targetSum-root->val);
    bool r = hasPathSum(root->right,targetSum-root->val);

    return l || r;
}
int main(){
    node* root = BuildTree();
    int target;
    cin>>target;
    if(hasPathSum(root,target)){
        cout<<"Yes,Path Sum is true"<<endl;
    }else{
        cout<<"No,Path Sum is false"<<endl;
    }
    return 0;
}               */

                            // Sum of Left Leaves
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
        node(int data){
            this->val = data;
            this->left = NULL;
            this->right = NULL;
        }
};
node* BuildTree(){
    int data;
    cin>>data;
    if(data == -1)
        return NULL;
    node* root = new node(data);
    root->left = BuildTree();
    root->right = BuildTree();

    return root;
}
int solve(node* root , string s){
    if(!root)
        return 0;
    if(root->left == NULL && root->right == NULL){
        if(s=="left") return root->val;
        return 0;
    }
    int l = solve(root->left,"left");
    int r = solve(root->right,"right");
    return l + r;
}
int sumOfLeftLeaves(node* root) {
    string s = "";
    return solve(root , s);
}
int main(){
    node* root = BuildTree();
    cout<<"Sum of Left Leaves are : "<<sumOfLeftLeaves(root);
    return 0;
}           */

                            //  Binary Tree Paths
/*
#include<bits/stdc++.h>
using namespace std;

vector<string>ans;
class node{
    public:
    int val;
    node* left;
    node* right;
        node(int data){
            this->val = data;
            this->left = NULL;
            this->right = NULL;
        }
};
node* BuildTree(){
    int data;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    root->left = BuildTree();
    root->right = BuildTree();

    return root;
}
void solve(node* root , string s){
    if(!root)  return ;
    if(root->left == NULL && root->right == NULL){
        s = s+ to_string(root->val);
        ans.push_back(s);
        return ;
    }
    s+=to_string(root->val);
    s = s+"->";
    solve(root->left,s);
    solve(root->right,s);
}
vector<string> binaryTreePaths(node* root) {
    ans.clear();
    string s = "";
    solve(root,s);
    return ans;
}
int main(){
    node* root = BuildTree();
    vector<string>ans = binaryTreePaths(root);
    cout<<"Binary tree paths are : "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if(i<ans.size()-1)
        cout<<" , ";
    }
    cout<<endl;
    return 0;
}                       */

                            // Invert Binary Tree
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
node* BuildTree(){
    int data;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    root->left = BuildTree();
    root->right = BuildTree();

    return root;
}
node* InvertTree(node* root){
    if(root == NULL)
    return NULL;
    swap(root->left,root->right);
    InvertTree(root->left);
    InvertTree(root->right);
    return root;
}
void print(node* root){
    if(root == NULL)
    return;
    cout<<root->val<<" ";
    print(root->left);
    print(root->right);
}
int main(){
    node* root = BuildTree();
    cout<<"Original Tree : ";
    print(root);
    cout<<endl<<"Invert Tree : ";
    root = InvertTree(root);
    print(root);
    return 0;
}               */

                            // Level Order Traversal
/*
#include<bits/stdc++.h>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
node* BuildTree(){
    cout<<"Enter root node data : ";
    queue<node*> q;
    int data,LD,Rd;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* f = q.front();
        q.pop();
        cout<<"Enter left node data of "<<f->data<<" : ";
        cin>>LD;
        if(LD != -1){
        node* ld = new node(LD);
        f->left = ld;
        q.push(ld);
        }
        cout<<"Enter right node data of "<<f->data<<" : ";
        cin>>Rd;
        if(Rd != -1){
        node* rd = new node(Rd);
        f->right = rd;
        q.push(rd);
        }
    }

    return root;
}
void print(node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* f = q.front();
        q.pop();

        cout<<f->data<<" ";
        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);
    }

}
int main(){
    node* root = BuildTree();
    print(root);
    return 0;
}           */
/*
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
node* BuildTree(){
    cout<<"Enter root node data : ";
    queue<node*> q;
    int data,LD,Rd;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* f = q.front();
        q.pop();
        cout<<"Enter left node data of "<<f->data<<" : ";
        cin>>LD;
        if(LD != -1){
        node* ld = new node(LD);
        f->left = ld;
        q.push(ld);
        }
        cout<<"Enter right node data of "<<f->data<<" : ";
        cin>>Rd;
        if(Rd != -1){
        node* rd = new node(Rd);
        f->right = rd;
        q.push(rd);
        }
    }

    return root;
}
vector<vector<int>> levelOrder(node* root) {
    vector<vector<int>> result;
    if (!root) return result;
    queue<node*> q;
    q.push(root);
    while (!q.empty()) {
        int level_size = q.size();
        vector<int> level; 
        for (int i = 0; i < level_size; i++) {
            node* node = q.front();
            q.pop();
            level.push_back(node->data);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }     
        result.push_back(level);
    }
    return result;
}
int main(){
    node* root = BuildTree();
    vector<vector<int>> result = levelOrder(root);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}               */

                                // ZigZag Level Order
/*
#include<bits/stdc++.h>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
            node(int data){
                this->data=data;
                this->left=NULL;
                this->right=NULL;
            }
};

node* BulidTreeLevelOrder( ){
    queue<node*> q;
    cout<<"Enter data for root : ";
    int data;
    cin>>data;
    node* root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"enter data for left node : "<<temp ->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            temp -> left = new node(leftdata);
            q.push(temp -> left);
        }

        cout<<"enter data for Right node : "<<temp ->data<<endl;
        int rightdata;
        cin>>rightdata; 
        if(rightdata != -1){
            temp -> left = new node(rightdata);
            q.push(temp -> left);
        }
    }
}

vector<vector<int>> zigzagLevelOrder(node* root) {
    vector<vector<int>> ans;
    if(root == NULL) return ans;
    queue<node*> q;
    q.push(root);

    int cnt = 0;
    while(!q.empty()){
        vector<int> temp;
        int size = q.size();
        while(size--){
            node* f = q.front();
            q.pop();
            temp.push_back(f->data);
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
        if(cnt %2 == 1){
            reverse(temp.begin(), temp.end());
        }
        ans.push_back(temp);
        cnt++;
    }
    return ans;
}

int main(){
    node* root = BulidTreeLevelOrder();
    vector<vector<int>> ans = zigzagLevelOrder(root);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
            }
    }

    return 0;
}                   */

                                // Sum root to leaf number
/*
#include<bits/stdc++.h>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
            node(int data){
                this->data=data;
                this->left=NULL;
                this->right=NULL;
            }
};
node* BulidTreeLevelOrder( ){
    queue<node*> q;
    cout<<"Enter data for root : ";
    int data;
    cin>>data;
    node* root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"enter data for left node : "<<temp ->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            temp -> left = new node(leftdata);
            q.push(temp -> left);
        }

        cout<<"enter data for Right node : "<<temp ->data<<endl;
        int rightdata;
        cin>>rightdata; 
        if(rightdata != -1){
            temp -> left = new node(rightdata);
            q.push(temp -> left);
        }
    }
}
void solve(node* root, int sum, int &ans){
    if(root == NULL) return;
    sum = sum * 10 + root -> data;
    if(root -> left == NULL && root -> right == NULL){
        ans += sum;
    }
    solve(root -> left, sum, ans);
    solve(root -> right,sum, ans);
}
int sumNumbers(node* root) {
    int ans =0;
    int sum = 0;
    solve(root,sum, ans);
    return ans;
}

int main(){
    node* root = BulidTreeLevelOrder();
    cout<<sumNumbers(root);

    return 0;
}               */


                            // Left view of Binary
/*    Using (BFS)
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
node* BuildTree(){
    cout<<"Enter root node data : ";
    queue<node*> q;
    int data,LD,Rd;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* f = q.front();
        q.pop();
        cout<<"Enter left node data of "<<f->data<<" : ";
        cin>>LD;
        if(LD != -1){
        node* ld = new node(LD);
        f->left = ld;
        q.push(ld);
        }
        cout<<"Enter right node data of "<<f->data<<" : ";
        cin>>Rd;
        if(Rd != -1){
        node* rd = new node(Rd);
        f->right = rd;
        q.push(rd);
        }
    }

    return root;
}
void solve(node* root , vector<int>& ans){
    if(root == NULL)
    return;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        bool flag = 0;
        int size = q.size();
        while(size--){
            node* f = q.front();
            q.pop();
            if(flag == 0){
            ans.push_back(f->data);
            flag = 1;
            }
            if(f->left)
            q.push(f->left);
            if(f->right)
            q.push(f->right);
        }
    }
}
vector<int> leftView(node *root){
    vector<int> ans;
    solve(root,ans);
    return ans;
}
int main(){
    node* root = BuildTree();
    vector<int> ans = leftView(root);
    for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
    }
    return 0;
}               */
/*    Using (DFS)
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
node* BuildTree(){
    cout<<"Enter root node data : ";
    queue<node*> q;
    int data,LD,Rd;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* f = q.front();
        q.pop();
        cout<<"Enter left node data of "<<f->data<<" : ";
        cin>>LD;
        if(LD != -1){
        node* ld = new node(LD);
        f->left = ld;
        q.push(ld);
        }
        cout<<"Enter right node data of "<<f->data<<" : ";
        cin>>Rd;
        if(Rd != -1){
        node* rd = new node(Rd);
        f->right = rd;
        q.push(rd);
        }
    }

    return root;
}
void solve(node* root,int depth,vector<int>& ans){
    if(root == NULL)    return;
    if(depth == ans.size()){
        ans.push_back(root->data);
    }
    solve(root->left,depth+1,ans);
    solve(root->right,depth+1,ans);
}
vector<int> leftView(node* root){
    vector<int>ans;
    solve(root,0,ans);
    return ans;
}
int main(){
    node* root = BuildTree();
    vector<int>result = leftView(root);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}               */


                                // Diameter Of Binary Tree
/*
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
node* BuildTree(){
    cout<<"Enter root node data : ";
    queue<node*> q;
    int data,LD,Rd;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* f = q.front();
        q.pop();
        cout<<"Enter left node data of "<<f->data<<" : ";
        cin>>LD;
        if(LD != -1){
        node* ld = new node(LD);
        f->left = ld;
        q.push(ld);
        }
        cout<<"Enter right node data of "<<f->data<<" : ";
        cin>>Rd;
        if(Rd != -1){
        node* rd = new node(Rd);
        f->right = rd;
        q.push(rd);
        }
    }

    return root;
}
int height(node* root){
    if(root == NULL)  return 0;
    return 1 + max(height(root->left),height(root->right));
}
void solve(node* root , int& ans){
    if(root == NULL)    return;
    int lh = height(root->left);
    int rh = height(root->right);
    ans = max(ans,lh+rh);
    solve(root->left,ans);
    solve(root->right,ans);
}
int diameterOfBinaryTree(node* root) {
    int ans = 0;
    solve(root,ans);
    return ans;
}
int main(){
    node* root = BuildTree();
    cout<<"Diameter of Binary Tree is : "<<diameterOfBinaryTree(root);
    return 0;
}                   */
/*
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
node* BuildTree(){
    cout<<"Enter root node data : ";
    queue<node*> q;
    int data,LD,Rd;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* f = q.front();
        q.pop();
        cout<<"Enter left node data of "<<f->data<<" : ";
        cin>>LD;
        if(LD != -1){
        node* ld = new node(LD);
        f->left = ld;
        q.push(ld);
        }
        cout<<"Enter right node data of "<<f->data<<" : ";
        cin>>Rd;
        if(Rd != -1){
        node* rd = new node(Rd);
        f->right = rd;
        q.push(rd);
        }
    }

    return root;
}
int diameter(node* root,int& ans){
    if(root == NULL)
    return 0;

    int lh = diameter(root->left,ans);
    int rh = diameter(root->right,ans);
    ans = max(ans,lh+rh);

    return max(lh,rh)+1;
}
int diameterOfBinaryTree(node* root){
    int ans = 0;
    diameter(root,ans);
    return ans;
}
int main(){
    node* root = BuildTree();
    cout<<"Diameter of Binary Tree is : "<<diameterOfBinaryTree(root);
    return 0;
}           */


                                // Lowest Common Ancestor of a Binary Tree
/*  Time Complexity(0(n))
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
node* BuildTree(){
    cout<<"Enter root node data : ";
    queue<node*> q;
    int data,LD,Rd;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* f = q.front();
        q.pop();
        cout<<"Enter left node data of "<<f->data<<" : ";
        cin>>LD;
        if(LD != -1){
        node* ld = new node(LD);
        f->left = ld;
        q.push(ld);
        }
        cout<<"Enter right node data of "<<f->data<<" : ";
        cin>>Rd;
        if(Rd != -1){
        node* rd = new node(Rd);
        f->right = rd;
        q.push(rd);
        }
    }

    return root;
}

node* solve(node* root, node* p, node* q) {
    if(!root)
    return NULL;
    if(root == p || root == q){
        return root;
    }
    node* lst = solve(root->left,p,q);
    node* rst = solve(root->right,p,q);
    if(lst && rst){
        return root;
    }else if(lst){
        return lst;
    }else if(rst){
        return rst;
    }
    return NULL;
}
node* lowestCommonAncestor(node* root, node* p, node* q) {
    return solve(root,p,q);
}
void print(node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* f = q.front();
        q.pop();

        cout<<f->data<<" ";
        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);
    }

}
node* findNode(node* root, int data) {
    if (root == NULL)
        return NULL;
    if (root->data == data)
        return root;
    node* left = findNode(root->left, data);
    if (left != NULL)
        return left;
    return findNode(root->right, data);
}
int main(){
    node* root = BuildTree();
    int pData, qData;
    cout << "Enter data for node p: ";
    cin >> pData;
    cout << "Enter data for node q: ";
    cin >> qData;

    node* p = findNode(root, pData);
    node* q = findNode(root, qData);
    node* lca = lowestCommonAncestor(root,p,q);
    cout<<lca->data;
    return 0;
}               */           
/* Extra Space
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
node* BuildTree(){
    cout<<"Enter root node data : ";
    queue<node*> q;
    int data,LD,Rd;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* f = q.front();
        q.pop();
        cout<<"Enter left node data of "<<f->data<<" : ";
        cin>>LD;
        if(LD != -1){
        node* ld = new node(LD);
        f->left = ld;
        q.push(ld);
        }
        cout<<"Enter right node data of "<<f->data<<" : ";
        cin>>Rd;
        if(Rd != -1){
        node* rd = new node(Rd);
        f->right = rd;
        q.push(rd);
        }
    }

    return root;
}
bool findPath(node* root,node* Node,vector<node*>& path){
// base case
    if(root == Node){
        path.push_back(root);
        return true;
    }
    if(root == NULL){
        return false;
    }
    path.push_back(root);
    if(findPath(root->left,Node,path)) return true;
    if(findPath(root->right,Node,path)) return true;
    path.pop_back();

    return false;
}
node* lowestCommonAncestor(node* root, node* p, node* q) {
    if(!root)
    return NULL;
    vector<node*> path1,path2;
    findPath(root,p,path1);
    findPath(root,q,path2);
    for(int i = min(path1.size(),path2.size())-1;i>=0;i--){
        if(path1[i] == path2[i]){
            return path1[i];
        }
    }
    return NULL;
}
node* findNode(node* root, int data) {
    if (root == NULL)
        return NULL;
    if (root->data == data)
        return root;
    node* left = findNode(root->left, data);
    if (left != NULL)
        return left;
    return findNode(root->right, data);
}
void  print(node* root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main(){
    node* root = BuildTree();
    int pData, qData;
    cout << "Enter data for node p: ";
    cin >> pData;
    cout << "Enter data for node q: ";
    cin >> qData;

    node* p = findNode(root, pData);
    node* q = findNode(root, qData);
    print(root);
    cout<<endl;
    node* lca = lowestCommonAncestor(root,p,q);
    cout<<lca->data;
    return 0;
}                           */

                                // Parsing the input
/*
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
node* BuildTree(queue<string>& values){
    if(values.empty())
    return NULL;
    string val = values.front();
    values.pop();

    int nodeData = stoi(val);
    node* root = new node(nodeData);

    // LST
    if(!values.empty() && values.front() == "true"){
        values.pop();
        root->left = BuildTree(values);
    }else if(!values.empty() && values.front() == "false"){
        values.pop();
    }

    // RST
    if(!values.empty() && values.front() == "true"){
        values.pop();
        root->right = BuildTree(values);
    }else if(!values.empty() && values.front() == "false"){
            values.pop();
    }

    return root;
}
void print(node* root){
    if(root == NULL)
    return;
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    // cout<<s1<<endl;
    // cout<<s2<<endl;

    stringstream ss1(s1) , ss2(s2);
    string word;
    queue<string>q1,q2;
    while(ss1 >> word){
        // cout<<word<<" ";
        q1.push(word);
    }
    while(ss2 >> word){
        // cout<<word<<" ";
        q2.push(word);
    }
    node* root = BuildTree(q1);
    print(root);
    node* root1 = BuildTree(q2);
    print(root1);
    return 0;
}               */
/*
#include<bits/stdc++.h>
#include<string>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
		node(int x){
			data = x;
			left = NULL;
			right = NULL;
		}
};
node* buildLL(){
	string val;
	cin>>val;
	if(val == "false") return NULL;

	int data = stoi(val);
	node* root = new node(data);
	string leftcheck, rightcheck;

	cin>>leftcheck;
	if(leftcheck == "true"){
		root -> left = buildLL();
	}
	cin>>rightcheck;
	if(rightcheck == "true"){
		root -> right =  buildLL();
	}
	return root;
}
bool solve(node* r1, node* r2){
	if(r1 == NULL && r2 == NULL)
		return true;
	if(r1 == NULL || r2 == NULL)
		return false;
	
	bool p = solve(r1->left, r2->left);
	bool q = solve(r1->right, r2->right);
	
	return p && q;
}
int main() {
	node* root1 = buildLL();
	node* root2 = buildLL();
	bool result = solve(root1, root2);
	cout<<(result ? "true" : "false" )<<endl;
	return 0;
}                               */

    //  Step-By-Step Directions From a Binary Tree Node to Another(LRU)
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// node* BuildTree(){
//     int data;
//     cin>>data;
//     if(data == -1)
//     return NULL;
//     node* root = new node(data);
//     root->left = BuildTree();
//     root->right = BuildTree();
//     return root;
// }
// int main(){
//     return 0;
// }

/****************** Introduction and implementation *******************/

                // Binary Search Tree
/*  Implementation 
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
        node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};
node * InsertBST(node* root , int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }
    if(data < root->data){
        root->left = InsertBST(root->left , data); // data jo root ke data se kaam h
    }else{
        root->right = InsertBST(root->right , data); // data jo root ke data se jyada h
    }
    return root;
}
node* createBST(){
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    node* root = NULL;
    while(data!= -1){
        root = InsertBST(root , data);
        cin>>data;
    }
    return root;
}

void preorder(node*root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node*root){ // Binary search tree me In-Order traversal humesa sort hoga
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node*root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root = createBST();
    cout<<"Preorder Traversal : ";
    preorder(root);
    cout<<endl<<"Inorder Traversal : ";
    inorder(root);
    cout<<endl<<"Postorder Traversal : ";
    postorder(root);
    return 0;
}                                           */

/* print given range of Binary search tree
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
        node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};
node * InsertBST(node* root , int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }
    if(data < root->data){
        root->left = InsertBST(root->left , data); // data jo root ke data se kaam h
    }else{
        root->right = InsertBST(root->right , data); // data jo root ke data se jyada h
    }
    return root;
}
node* createBST(){
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    node* root = NULL;
    while(data!= -1){
        root = InsertBST(root , data);
        cin>>data;
    }
    return root;
}
void print(node* root , int s,int e){
    if(root == NULL){
        return;
    }
    if(root->data >= s && root->data <=e){
        cout<<root->data<<" ";
    }
    print(root->left,s,e);
    print(root->right,s,e);
}
int main(){
    node* root = createBST();
    int s , e;
    cin>>s>>e;
    print(root,s,e);
    return 0;
}                   */

/*  Sum of given range of BST
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
        node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};
node * InsertBST(node* root , int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }
    if(data < root->data){
        root->left = InsertBST(root->left , data); // data jo root ke data se kaam h
    }else{
        root->right = InsertBST(root->right , data); // data jo root ke data se jyada h
    }
    return root;
}
node* createBST(){
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    node* root = NULL;
    while(data!= -1){
        root = InsertBST(root , data);
        cin>>data;
    }
    return root;
}
int Sum(node* root , int s,int e){
    int sum = 0;
    if(root == NULL){
        return;
    }
    if(root->data >= s && root->data <=e){
        sum = sum + root->data;
    }
    int lst = Sum(root->left,s,e);
    int rst = Sum(root->right,s,e);
    return sum + lst + rst;
}
int main(){
    node* root = createBST();
    int s , e;
    cin>>s>>e;
    cout<<Sum(root,s,e);
    return 0;
}               */

        // Balanced Binary search Tree or not
/*(Time Complexity : 0(n^2))
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
        node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};
node * InsertBST(node* root , int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }
    if(data < root->data){
        root->left = InsertBST(root->left , data); // data jo root ke data se kaam h
    }else{
        root->right = InsertBST(root->right , data); // data jo root ke data se jyada h
    }
    return root;
}
node* createBST(){
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    node* root = NULL;
    while(data!= -1){
        root = InsertBST(root , data);
        cin>>data;
    }
    return root;
}
int height(node* root){
    if(!root)
    return 0;
    return max(height(root->left),height(root->right))+1;
}
    bool solve(node* root) {
        if(!root)
            return true;
        int lh = height(root->left);
        int rh = height(root->right);
        if(abs(lh-rh)>1)
            return false;

        return solve(root->left) && solve(root->right);
    }
    bool isBalanced(node* root){
        return solve(root);
    }
int main(){
    node* root = createBST();
    cout<<isBalanced(root)<<endl;
    return 0;
}                           */
/* Using Pair Time Complexity : 0(n);
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
        node(int data){
            this->data=data;
            left=NULL;
            right=NULL;
        }
};
node* InsertBST(node* root,int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }
    if(data<root->data){
        root->left=InsertBST(root->left,data);
    }
    if(data>root->data){
        root->right=InsertBST(root->right,data);
    }
    return root;
}
node* createBST(){
    int data;
    cin>>data;
    if(data==-1)    return NULL;
    node* root = NULL;
    while(data!=-1){
        root=InsertBST(root,data);
        cin>>data;
    }
    return root;
}
pair<bool,int>solve(node* root){
    if(!root)
    return {true,0};
    // pair<isBalanced , height>
    pair<bool,int> l = solve(root->left);
    pair<bool,int> r = solve(root->right);
    // calculation at some particular node
    pair<bool,int> ans;
    int height = max(l.second , r.second)+1;
    bool isBalance;
    if(l.first && r.first && abs(l.second-r.second)<=1){
        isBalance = true;
    }else{
        isBalance = false;
    }
    ans.first = isBalance;
    ans.second = height;
    return ans;

}
bool isBalanced(node* root){
    pair<bool,int> ans = solve(root);
    return ans.first;
}

int main(){
    node* root = createBST();
    if(isBalanced(root)){
        cout<<"Balanced"<<endl;
    }else{
        cout<<"Not Balanced"<<endl;
    }
    return 0;
}                           */

/*  Convert sortd Array to Binary Search Tree or Balance BST
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
        node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};
node* buildBalancedBST(vector<int>& ans, int start, int end) {
    if (start > end) return NULL;
    int mid = start + (end - start) / 2;
    node* root = new node(ans[mid]);
    root->left = buildBalancedBST(ans, start, mid - 1);
    root->right = buildBalancedBST(ans, mid + 1, end);
    return root;
}
node* balanceBST(vector<int>& ans) {
    return buildBalancedBST(ans, 0, ans.size() - 1);
}
void print(node* root){
    if (!root) return ;
    queue<node*> q;
    q.push(root);
    while (!q.empty()) {
        int level_size = q.size();
        for (int i = 0; i < level_size; i++) {
            node* node = q.front();
            q.pop();
            cout<<node->data<<" ";
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }     
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    node* root = balanceBST(arr);
    print(root);
    return 0;
}                                   */


                                        // Heap
// Heap is a complete binary tree where each parent node is either greater than or equal to its child
// Heap can be either max heap or min heap
// Max heap: parent node is greater than or equal to its child
// Min heap: parent node is less than or equal to its child
// Heap is used in priority queue
// Heapify up: used to maintain max heap property when a new element is added to the heap
// Heapify down: used to maintain max heap property when an element is removed from the heap
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    // max Heap / max Priority queue
    // declaration
    cout<<"max Heap"<<endl;
    priority_queue<int> pq;
    pq.push(10);
    pq.push(9);
    pq.push(15);
    pq.push(1);

    cout<<pq.top()<<endl;
    // While(!pq.empty()){
    // cout<<pq.top()<<endl;
    // pq.top();
    // }
    pq.pop();
    cout<<pq.top()<<endl;

    // min priority queue / min Heap
    cout<<"min Heap"<<endl;
    priority_queue<int,vector<int>,greater<int>> minPq;
    minPq.push(10);
    minPq.push(9);
    minPq.push(15);

    cout<<minPq.top()<<endl;
    minPq.pop();
    cout<<minPq.top()<<endl;

    return 0;
}           */


/* Kth Largest Element in an Array (Time Complexity = 0(n*log(k)))
#include<bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    int n =nums.size();
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(nums[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findKthLargest(arr,k)<<endl;
    return 0;
}                       */

/* Kth Smallest Element in an Array
#include<bits/stdc++.h>
using namespace std;
int findKthSmallest(int arr[], int k,int l,int r) {
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=l;i<=r;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findKthSmallest(arr,k,0,n-1)<<endl;
    return 0;
}               */

/* K Closet Points to Origin
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    int n = points.size();
    vector<vector<int>>ans;
    priority_queue<pair<int,int>>p;
    for(int i=0;i<n;i++){
        int x = points[i][0] , y = points[i][1];
        int d = (x*x) + (y*y);
        p.push({d,i});
        if(p.size()>k){
            p.pop();
        }
    }
    // while(!p.empty()){
    //     int a = p.top().second;
    //     ans.push_back({points[a][0],points[a][1]});
    //     p.pop();
    // }            OR
    while(!p.empty()){
        pair<int,int>top = p.top();
        p.pop();
        int ind = top.second;
        ans.push_back(points[ind]);
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>>points(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>points[i][0]>>points[i][1];
    }
    vector<vector<int>>ans = kClosest(points,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
    return 0;
}           */

/* Find K Closest Elements
#include<bits/stdc++.h>
using namespace std;
vector<int> findKClosestElements(vector<int>& arr, int k, int x) {
    int n = arr.size();
    vector<int>ans;
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<n;i++){
        int d = abs(x-arr[i]);
        pq.push({d,arr[i]});
        if(pq.size()>k){
            pq.pop();
        }
    }
    while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans = findKClosestElements(arr,k,x);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}               */

/* Nearly Sorted
#include<bits/stdc++.h>
using namespace std;
vector <int> nearlySorted(int arr[], int num, int K){
    vector<int>ans;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<num;i++){
        pq.push(arr[i]);
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans = nearlySorted(arr,n,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}                   */
/* 
#include<bits/stdc++.h>
using namespace std;
vector <int> nearlySorted(int arr[], int num, int K){
    vector<int>ans;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<num;i++){
        pq.push(arr[i]);
        // if(pq.size()>K+1){
        //     ans.push_back(pq.top());
        //     pq.pop();
        // }
        if(pq.size()==K+1){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
    pq.pop();
    }
    return ans;
}
int main(){
   int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans = nearlySorted(arr,n,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0; 
}               */

/* Merge K sorted Arrays
#include<bits/stdc++.h>
using namespace std;
vector<int> mergeKArrays(vector<vector<int>> arr, int K){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<K;i++){
        for(int j=0;j<K;j++){
            pq.push(arr[i][j]);
        }
    }
    vector<int>ans;
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
int main(){
    int k;
    cin>>k;
    vector<vector<int>> arr(k);
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cin>>arr[i][j];
        }
    }
    vector<int>ans = mergeKArrays(arr,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}                       */
//
#include<bits/stdc++.h>
using namespace std;
vector<int> mergeKArrays(vector<vector<int>> arr, int K){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<K;i++){
        for(int j=0;j<K;j++){
            pq.push(arr[i][j]);
        }
    }
    vector<int>ans;
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
int main(){
    int k;
    cin>>k;
    vector<vector<int>> arr(k);
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cin>>arr[i][j];
        }
    }
    vector<int>ans = mergeKArrays(arr,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}