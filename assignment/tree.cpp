/*                      //  Structurally Identical (Binary Tree)
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
}                   */

/*                        // Create tree ( Using preorder and inorder)
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
Node* buildTree(vector<int>& preorder, vector<int>& inorder, int& preIndex, int inStart, int inEnd, unordered_map<int, int>& inMap) {
    if (inStart > inEnd) return NULL;

    int rootVal = preorder[preIndex++];
    Node* root = new Node(rootVal);
    int inIndex = inMap[rootVal];

    root->left = buildTree(preorder, inorder, preIndex, inStart, inIndex - 1, inMap);
    root->right = buildTree(preorder, inorder, preIndex, inIndex + 1, inEnd, inMap);

    return root;
}

void printModifiedPreorder(Node* root) {
    if (root == NULL) return;

    if (root->left != NULL) {
        cout << root->left->data << " => ";
    } else {
        cout << "END => ";
    }
    cout << root->data << " <= ";
    if (root->right != NULL) {
        cout << root->right->data << endl;
    } else {
        cout << "END" << endl;
    }

    printModifiedPreorder(root->left);
    printModifiedPreorder(root->right);
}

int main() {
    int N, M;
    cin >> N;
    vector<int> preorder(N);
    for (int i = 0; i < N; ++i) {
        cin >> preorder[i];
    }

    cin >> M;
    vector<int> inorder(M);
    for (int i = 0; i < M; ++i) {
        cin >> inorder[i];
    }

    unordered_map<int, int> inMap;
    for (int i = 0; i < M; ++i) {
        inMap[inorder[i]] = i;
    }

    int preIndex = 0;
    Node* root = buildTree(preorder, inorder, preIndex, 0, N - 1, inMap);

    printModifiedPreorder(root);

    return 0;
}               */

/*                        // Level Order ( Zigzag , Binary Tree)
#include<bits/stdc++.h>
#include<vector>
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

	string leftcheck;	
	cin>>leftcheck;
	if(leftcheck == "true"){
		root -> left = buildLL();
	}
	
	string rightcheck;
	cin>>rightcheck;
	if(rightcheck == "true"){
		root -> right = buildLL();
	}
	return root;
}

vector<vector<int>> ZigZag(node* root){
	vector<vector<int>> ans;
	if(!root) return ans;

	queue<node*> q;
	q.push(root);

	int cnt = 0;
	while(!q.empty()){
		int size = q.size();
		vector<int> temp;
	
		while(size--){
			node* k = q.front();
			q.pop();
			temp.push_back(k->data);
			if(k -> left) q.push(k->left);
			if(k -> right) q.push(k->right);
		}
		if(cnt % 2 == 1){
			reverse(temp.begin(), temp.end());
		}
		cnt++;
		ans.push_back(temp);
	}
	return ans;
}

void printZigZag(node* root){
	vector<vector<int>> ans;
	ans = ZigZag(root);
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<ans[i].size(); j++){
			cout<<ans[i][j]<<" ";
		}
	}
}

int main() {
	node* root = buildLL();
	printZigZag(root);

	return 0;
}               */

/*                            // ArrayList of levels ( Binary Tree )
#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
    node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
node* buildLL() {
    string val;
    cin >> val;
    if (val == "false") return NULL;
    int data = stoi(val);
    node* root = new node(data);
    string leftcheck, rightcheck;
    cin >> leftcheck;
    if (leftcheck == "true") {
        root->left = buildLL();
    }
    cin >> rightcheck;
    if (rightcheck == "true") {
        root->right = buildLL();
    }
    return root;
}
vector<vector<int>> levelOrderTraversal(node* root) {
    vector<vector<int>> result;
    if (root == NULL) return result;

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> currentLevel;

        for (int i = 0; i < levelSize; ++i) {
            node* currentNode = q.front();
            q.pop();
            currentLevel.push_back(currentNode->data);

            if (currentNode->left != NULL) {
                q.push(currentNode->left);
            }
            if (currentNode->right != NULL) {
                q.push(currentNode->right);
            }
        }

        result.push_back(currentLevel);
    }

    return result;
}

void printResult(const vector<vector<int>>& result) {
    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j != result[i].size() - 1) cout << ", ";
        }
        cout << "]";
        if (i != result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    node* root = buildLL();
    vector<vector<int>> result = levelOrderTraversal(root);
    printResult(result);
    return 0;
}					*/

/*							// Is Balanced (Binary Tree)
#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}

pair<int,bool> isHeightBalancedOptimised(node *root)
{
     if (root == NULL) {
        return {0, true};
    }
    auto left = isHeightBalancedOptimised(root->left);
    auto right = isHeightBalancedOptimised(root->right);
    int height = max(left.first, right.first) + 1;
    bool balanced = abs(left.first - right.first) <= 1 && left.second && right.second;

    return {height, balanced};
}

int main()
{
    node *root = build("true");

    cout << boolalpha << isHeightBalancedOptimised(root).second;

    return 0;
}											*/

/*							//Create Tree (using postorder and Inorder Traversal)
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int value) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == value) {
            return i;
        }
    }
    return -1;
}

Node* buildTree(int postorder[], int inorder[], int start, int end, int& postIndex) {
    if (start > end) {
        return NULL;
    }

    Node* root = new Node(postorder[postIndex--]);
    int inorderIndex = search(inorder, start, end, root->data);

    root->right = buildTree(postorder, inorder, inorderIndex + 1, end, postIndex);
    root->left = buildTree(postorder, inorder, start, inorderIndex - 1, postIndex);

    return root;
}

void display(Node* root) {
    if (root == NULL) {
        return;
    }

    if (root->left == NULL) {
        cout << "END => ";
    } else {
        cout << root->left->data << " => ";
    }

    cout << root->data;

    if (root->right == NULL) {
        cout << " <= END" << endl;
    } else {
        cout << " <= " << root->right->data << endl;
    }

    display(root->left);
    display(root->right);
}

int main() {
    int n;
    cin >> n;

    int postorder[n];
    for (int i = 0; i < n; i++) {
        cin >> postorder[i];
    }

    int m;
    cin >> m;

    int inorder[m];
    for (int i = 0; i < m; i++) {
        cin >> inorder[i];
    }

    int postIndex = n - 1;
    Node* root = buildTree(postorder, inorder, 0, n - 1, postIndex);

    display(root);

    return 0;
}                           */

/*                            //Level Order ( New Line, Binary Tree)
#include <bits/stdc++.h>
using namespace std;
class node {
public:
    int data;
    node* left;
    node* right;
    node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
node* buildTree() {
    string val;
    cin >> val;
    if (val == "false") return NULL;
    int data = stoi(val);
    node* root = new node(data);
    string leftcheck, rightcheck;
    cin >> leftcheck;
    if (leftcheck == "true") {
        root->left = buildTree();
    }
    cin >> rightcheck;
    if (rightcheck == "true") {
        root->right = buildTree();
    }
    return root;
}
void levelOrderTraversal(node* root) {
    if (root == NULL) return;

    queue<node*> q;
    q.push(root);
    
    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> levelNodes;

        for (int i = 0; i < levelSize; i++) {
            node* current = q.front();
            q.pop();
            levelNodes.push_back(current->data);
            
            if (current->left != NULL) q.push(current->left);
            if (current->right != NULL) q.push(current->right);
        }
        
        for (int val : levelNodes) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    node* root = buildTree();
    levelOrderTraversal(root);
    return 0;
}                                   */

/*                        // Remove the leaves ( Binary Tree )
#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
    node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

node* buildLL() {
    string val;
    cin >> val;
    if (val == "false") return NULL;
    int data = stoi(val);
    node* root = new node(data);
    string leftcheck, rightcheck;
    cin >> leftcheck;
    if (leftcheck == "true") {
        root->left = buildLL();
    }
    cin >> rightcheck;
    if (rightcheck == "true") {
        root->right = buildLL();
    }
    return root;
}

node* removeLeaves(node* root) {
    if (root == NULL) return NULL;
    if (root->left == NULL && root->right == NULL) {
        delete root;
        return NULL;
    }
    root->left = removeLeaves(root->left);
    root->right = removeLeaves(root->right);
    return root;
}
void displayTree(node* root) {
    if (root == NULL) {
        return;
    }
    if (root->left != NULL) {
        cout << root->left->data << " => " << root->data;
    } else {
        cout << "END => " << root->data;
    }
    cout << " <= ";
    if (root->right != NULL) {
        cout << root->right->data;
    } else {
        cout << "END";
    }
    cout << endl;
    displayTree(root->left);
    displayTree(root->right);
}
int main() {
    node* root = buildLL();
    root = removeLeaves(root);
    displayTree(root);
    return 0;
}                       */

/*                            // Sum of the nodes (Binary tree)
#include<iostream>
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

	string leftcheck,rightcheck;
	
	cin>>leftcheck;
	if(leftcheck == "true"){
		root -> left = buildLL();
	}

	cin>>rightcheck;
	if(rightcheck == "true"){
		root -> right = buildLL();
	}

	return root;
}

int sumofNodes(node* root){
	if(!root) return NULL;
	
	int l = sumofNodes(root -> left);
	int r = sumofNodes(root -> right);
	return l+r+root->data;
}

int main() {
	node* root = buildLL();
	int sum = 0;
	sum = sumofNodes(root);
	cout<<sum<<endl;
	return 0;
}                               */

/*                            // Sibling ( Binary Tree)
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(string s) {
    if (s == "true") {
        int d;
        cin >> d;
        Node* root = new Node(d);
        string leftChild, rightChild;
        cin >> leftChild;
        root->left = buildTree(leftChild);
        cin >> rightChild;
        root->right = buildTree(rightChild);
        return root;
    }
    return NULL;
}

vector<int> printNodesWithoutSiblings(Node* root) {
    vector<int> ans;
    if (!root) return ans;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        if (current->left != NULL && current->right == NULL) {
            ans.push_back(current->left->data);
        }
        if (current->left == NULL && current->right != NULL) {
            ans.push_back(current->right->data);
        }
        if (current->left != NULL) {
            q.push(current->left);
        }
        if (current->right != NULL) {
            q.push(current->right);
        }
    }
    return ans;
}

int main() {
    Node* root = buildTree("true");
    vector<int> ans = printNodesWithoutSiblings(root);
    for (int i =0 ;i<ans.size() ; i++) {
        cout << ans[i] << " ";
    }
    cout << endl; 
    return 0;
}                               */

/*                            // Binary Trees -- Print All Leaf Nodes
#include <iostream>
#include <queue>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

Node* buildTree() {
    int data;
    cin >> data;
    if (data == -1) return nullptr;

    Node* root = new Node(data);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        int leftData, rightData;
        cin >> leftData >> rightData;

        if (leftData != -1) {
            current->left = new Node(leftData);
            q.push(current->left);
        }
        if (rightData != -1) {
            current->right = new Node(rightData);
            q.push(current->right);
        }
    }

    return root;
}

void printLeafNodes(Node* root) {
    if (root == nullptr) return;
    if (root->left == nullptr && root->right == nullptr) {
        cout << root->data << " ";
    }
    if (root->left) printLeafNodes(root->left);
    if (root->right) printLeafNodes(root->right);
}

int main() {
    Node* root = buildTree();
    printLeafNodes(root);
    cout << endl;
    return 0;
}                                   */

/*    ??????                   // Largest BST in a Binary Tree
#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int& preIndex, int inStart, int inEnd, unordered_map<int, int>& inMap) {
    if (inStart > inEnd) return NULL;

    int rootVal = preorder[preIndex++];
    TreeNode* root = new TreeNode(rootVal);
    int inIndex = inMap[rootVal];
    root->left = buildTree(preorder, inorder, preIndex, inStart, inIndex - 1, inMap);
    root->right = buildTree(preorder, inorder, preIndex, inIndex + 1, inEnd, inMap);
    return root;
}
tuple<int, int, int> largestBSTSubtree(TreeNode* root) {
    if (!root) return {0, INT_MAX, INT_MIN}; // size, min, max

    tuple<int, int, int> leftResult = largestBSTSubtree(root->left);
    tuple<int, int, int> rightResult = largestBSTSubtree(root->right);

    int leftSize = get<0>(leftResult);
    int leftMin = get<1>(leftResult);
    int leftMax = get<2>(leftResult);

    int rightSize = get<0>(rightResult);
    int rightMin = get<1>(rightResult);
    int rightMax = get<2>(rightResult);

    if (leftSize == -1 || rightSize == -1 || root->val <= leftMax || root->val >= rightMin) {
        return {max(leftSize, rightSize), INT_MIN, INT_MAX}; // Not a BST
    }

    int size = leftSize + rightSize + 1;
    int minVal = min(root->val, leftMin);
    int maxVal = max(root->val, rightMax);

    return {size, minVal, maxVal}; // Size of the BST subtree
}

int main() {
    int n;
    cin >> n;
    vector<int> preorder(n);
    vector<int> inorder(n);
    
    for (int i = 0; i < n; ++i) cin >> preorder[i];
    for (int i = 0; i < n; ++i) cin >> inorder[i];
    
    unordered_map<int, int> inMap;
    for (int i = 0; i < n; ++i) inMap[inorder[i]] = i;

    int preIndex = 0;
    TreeNode* root = buildTree(preorder, inorder, preIndex, 0, n - 1, inMap);

    tuple<int, int, int> result = largestBSTSubtree(root);
    int largestBSTSize = get<0>(result);
    cout << largestBSTSize << endl;

    return 0;
}                                       */

