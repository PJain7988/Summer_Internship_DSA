//linklist -> linear data structure
//need=>it does not require continuous memory for array  , it creates two blocks of memory side by side  one for data and other for storing memroy address of next element
//these two blocks together is known as node  ,each node of a lnklist is a class ,first element of a node is called a head 
//address never stores garbage value
//head stores addrress of first node 
// tail stores address of last node 
		
//		node(int data){
//			this->data=data;
//			this->next=NULL;
//		}
//		
//		node* Insert(){
//			int val;
//			cin>>val;
//			node* head=NULL;
//			node* tail=NULL;
//			
//			while(val>0){
//				if(head==NULL){
//					node* n=new node(val);
//					head=n;
//					tail=n;
//				}else{
//					node* n=new node(val);
//					tail->next=n;
//					tail=n;
//				}
//				cin>>val;
//			}
//			return head;
//		}
//		void push(){
//			
//		}

//************************* instertion in a linked list ************************************
//#include<iostream>
//using namespace std;
//class node{
//	public:
//		int data;
//		node* next;
//		
//		node(int data){
//			this->data=data;
//			next=NULL;
//		}
//};
//
////************ INSERTION IN LINKLIST ****************
//void InsertionAtEnd(node* &head ,node* &tail,int data){
//	if(head==NULL){
//		node* n=new node(data);//n=100
//		head=n;
//		tail=n;
//	}else{
//		node* n=new node(data);
//		tail->next=n;
//		tail=n;
//	}}
//	
////	linklist indexing ->we assume that starts from zero
//	void InsertionAtMid(node* &head ,node* &tail,int pos,int data){
//		node* temp=head;
//		for(int i=1;i<=pos-1;i++){
//			temp=temp->next;
//		}
//		node* n=new node(data);
//		n->next=temp->next;
//		temp->next=n;
//	}
//	
//	
//void InsertionAtFront(node* &head,node* &tail ,int data){
//	if(head==NULL){
//		node* n=new node(data);
//		head=tail=n;
//	}else{
//		node* n=new node(data);
//		n->next=head;
//		head=n;
//	}
//}
//void DeletionFront(node* &head,node* &tail){
//		if(head==NULL){
//			cout<<"kya tapleek hai apko??hihahaaaaaaaaa"<<endl;
//			return;
//		}
//		else if(head->next==NULL){
//			delete head;
//			tail=NULL;
//			head=NULL;
//		}
//		else{
//			node* temp=head;
//			head=head->next;
//			delete temp;
//			
//		}
//	}
//	
//void DeletionEnd(node* &head,node* &tail)	{
//	if(head==NULL){
//			cout<<"kya tapleek hai apko??"<<endl;
//			return;
//		}
//		else if(head->next==NULL){
//			delete head;
//			tail=NULL;
//			head=NULL;
//		}
//		else{
//			node* temp =head;
//			while(temp->next!=tail){
//				temp=temp->next;
//			}
//			delete tail;
//			tail=temp;
//			tail->next=NULL;
//		}
//}
//
//int length(node* head){
//	int len=0;
//	node* temp=head;
//	while(temp!=NULL){
//		temp=temp->next;
//		len++;
//	}
//	return len;
//}
//void DeletionMid(node* &head,node* &tail,int pos){
//	int len=length(head);
//	if(pos==0){
//		DeletionFront(head,tail);
//	}
//	else if(pos>=len-1){
//	DeletionEnd(head,tail);
//	}
//	else{
//		node* temp=head;
//		for(int i=1;i<=pos-1;i++){
//			temp=temp->next;
//		}
//		node* n=temp->next;
//		temp->next=n->next;
//		delete n;
//	}
//}
//*********************** reverse linklist *******************************
//I want to return the head ofrevrse of linklist
//node* reverse(node* &head){
//	node* prev=NULL;
//	node* curr=head;
//	node* nxt=curr->next;
//	
//	while(curr){
//		nxt=curr->next;
//		curr->next=prev;
//		prev=curr;
//		curr=nxt;
//	}
//	return prev;
//}
//	
//void print(node* head){
//	node* temp=head;
//	while(temp!=NULL){
//		cout<<temp->data<<"-->";
//		temp=temp->next;
//	}
//	cout<<"NULL"<<endl;
//}
//
//int main()
//{
//	node* head=NULL;
//	node* tail=NULL;
//	InsertionAtEnd(head,tail,1);
//	InsertionAtEnd(head,tail,2);
//	InsertionAtEnd(head,tail,3);
//	InsertionAtEnd(head,tail,4);
//	InsertionAtFront(head,tail,5);
//	InsertionAtFront(head,tail,6);
//	InsertionAtFront(head,tail,7);
//	InsertionAtFront(head,tail,8);
//	InsertionAtMid(head,tail,2,20);
//	print(head);
//	DeletionFront(head,tail);
//	print(head);
//	DeletionEnd(head,tail);
//	print(head);
//	DeletionMid(head,tail,2);
//	print(head);
//	//temp me reverse linklist ka head h
//	node* temp=reverse(head);
//	print(temp);
//	node a;
//	a.data=1;
//	a.next=NULL;
//		
//	node b;
//	b.data=2;
//	b.next=NULL;
//	
//	node c;
//	c.data=3;
//	c.next=NULL;
//	
////	a--->b
//	a.next=&b;
//	b.next=&c;
//	cout<<a.data<<"--->"<<(a.next)->data<<"--->"<<(b.next)->data<<" "<<"NULL"<<endl;
//////////////////////////////// OR///////////////////////////
//	cout<<a.data<<"--->"<<(*a.next).data<<"--->"<<(*b.next).data<<" "<<"NULL"<<endl;
//	////////////////////////////// OR///////////////////////////
//	
//		cout<<a.data<<"--->"<<(a.next)->data<<"--->"<<(a.next)->next->data<<" "<<"NULL"<<endl;
//////////////////////////////// OR///////////////////////////
////	node c=*(a.next);
////	cout<<c.data<<endl;
//
//	return 0;
//}







//********************************* merge two sorted linklist ****************************************8
//Two methods => dummy linklist concept /dummy noode
//#include<iostream>
//using namespace std;
//class node{
//	public:
//		int data;
//		node* next;
//		//constructor
//		node(int data){
//			this->data=data;
//			next=NULL;
//		}
//};
//
//node* buildLinkedList(){
//	
//	node* head=NULL;
//	node* tail=NULL;
//	
//	int data;
//	cin>>data;
//	while(data!=-1){
//		if(head==NULL){
//			node* n= new node(data);
//			head=n;
//			tail=n;
//		}
//		else{
//			node* n= new node(data);
//			tail->next=n;
//			tail=n;	
//		}
//		cin>>data;
//	}
//	return head;
//}
//
//int length(node* head){
//	int len=0;
//	node* temp=head;
//	while(temp!=NULL){
//		temp=temp->next;
//		len++;
//	}
//	return len;
//}
//
// node* MergeSortedList(node* head1,node* head2){
// 	node* dummy=new node(-1);
// 	node* ans=dummy;
// 	node* temp1=head1;
// 	node* temp2=head2;
// 	while(temp1!=NULL && temp2!=NULL){
// 		if(temp1->data<temp2->data){
// 			dummy->next=temp1;
// 			temp1=temp1->next;
// 			dummy=dummy->next;
// 		}
// 		else{
// 			dummy->next=temp2;
// 			temp2=temp2->next;
// 			dummy=dummy->next;
// 		}
// 	}
// 	while(temp1!=NULL){
// 		dummy->next=temp1;
// 		dummy=dummy->next;
// 		temp1=temp1->next;
		
// 	}
// 	while(temp2!=NULL){
// 		dummy->next=temp2;
// 		dummy=dummy->next;
// 		temp2=temp2->next;
		
// 	}
// 	return ans->next;
// }

//void print(node* head){
//	node* temp=head;
//	while(temp!=NULL){
//		cout<<temp->data<<"-->";
//		temp=temp->next;
//	}
//	cout<<"NULL"<<endl;
//}
//
//int main()
//{
//	node* head1=buildLinkedList();
//	node* head2=buildLinkedList();
//	print(head1);
//	print(head2);
//	node* mergedNode=MergeSortedList(head1,head2);
//	print(mergedNode);
//}






//*********************************** how to detect cycle in a linklist **************************
//#include<iostream>
//using namespace std;
//
//class node {
//public:
//    int data;
//    node* next;
//    
//    // Constructor
//    node(int data) {
//        this->data = data;
//        this->next = NULL;
//    }
//};
//
//node* buildLinkedList() {
//    node* head = NULL;
//    node* tail = NULL;
//    
//    int data;
//    cin >> data;
//    while (data != -1) {
//        node* n = new node(data);
//        if (head == NULL) {
//            head = n;
//            tail = n;
//        } else {
//            tail->next = n;
//            tail = n;
//        }
//        cin >> data;
//    }
//    tail->next = head;
//    return head;
//}
//
//bool DetectCycle(node* head) {
//    node* slow = head;
//    node* fast = head;
//    
//    if (head == NULL || head->next == NULL) {
//        return false;
//    }
//    
//    do {
//        if (fast == NULL || fast->next == NULL) {
//            return false;
//        }
//        fast = fast->next->next;
//        slow = slow->next;
//    } while (slow != fast);
//    
//    return true;
//}
//
//void print(node* head) {
//    node* temp = head;
//    while (temp != NULL) {
//        cout << temp->data << "-->";
//        temp = temp->next;
//    }
//    cout << "NULL" << endl;
//}
//
//int main() {
//    node* head = buildLinkedList();
//    if (DetectCycle(head)) {
//        cout << "Cycle detected" << endl;
//    } else {
//        cout << "No cycle" << endl;
//    }
//    return 0;
//}






//******************** return common element where cycle starts and closes ************************
//#include<iostream>
//using namespace std;
//
//class node {
//public:
//    int data;
//    node* next;
//    
//    // Constructor
//    node(int data) {
//        this->data = data;
//        this->next = NULL;
//    }
//};
//
//node* buildLinkedList() {
//    node* head = NULL;
//    node* tail = NULL;
//    
//    int data;
//    cin >> data;
//    while (data != -1) {
//        node* n = new node(data);
//        if (head == NULL) {
//            head = n;
//            tail = n;
//        } else {
//            tail->next = n;
//            tail = n;
//        }
//        cin >> data;
//    }
//    tail->next = head;
//    return head;
//}
//
//node* DetectCycle(node* head) {
//   if(head==NULL || head->next==NULL){
//   	return NULL;
//   }
//   // meeting point
//   node* slow=head;
//   node* fast=head;
//   do{
//   	if(fast==NULL || fast->next==NULL)
//   	return NULL;
//   	
//   	slow=slow->next;
//   	fast=fast->next->next;
//   }while(slow!=fast);
//   
//   slow=head;
//   while(slow!=fast){
//   	slow=slow->next;
//   	fast=fast->next;
//   }
//   
//   return slow;
//}
//
//void print(node* head) {
//    node* temp = head;
//    while (temp != NULL) {
//        cout << temp->data << "-->";
//        temp = temp->next;
//    }
//    cout << "NULL" << endl;
//}
//
//int main() {
//    node* head = buildLinkedList();
//    node* cycleNode = DetectCycle(head);
//    
//    if (cycleNode != NULL) {
//        cout << "Cycle detected at node with value: " << cycleNode->data << endl;
//    } else {
//        cout << "No cycle detected" << endl;
//    }
//
//    return 0;
//}






//*********************** delete node=3 from linklist and print remaining  node **************************
//
//#include<iostream>
//using namespace std;
//
//class node {
//public:
//    int data;
//    node* next;
//    
//    // Constructor
//    node(int data) {
//        this->data = data;
//        this->next = NULL;
//    }
//};
//
//node* buildLinkedList() {
//    node* head = NULL;
//    node* tail = NULL;
//    
//    int data;
//    cin >> data;
//    while (data != -1) {
//        node* n = new node(data);
//        if (head == NULL) {
//            head = n;
//            tail = n;
//        } else {
//            tail->next = n;
//            tail = n;
//        }
//        cin >> data;
//    }
//    return head;
//}
//
//node* deleteEL(node* head, int num) {
//    if (head == NULL) {
//        return NULL;
//    }
//    
//    // If the node to be deleted is the head node
//    while (head != NULL && head->data == num) {
//        node* temp = head;
//        head = head->next;
//        delete temp;
//    }
//
//    node* current = head;
//    while (current != NULL && current->next != NULL) {
//        if (current->next->data == num) {
//            node* temp = current->next;
//            current->next = current->next->next;
//            delete temp;
//        } else {
//            current = current->next;
//        }
//    }
//
//    return head;
//}
//
//void print(node* head) {
//    node* temp = head;
//    while (temp != NULL) {
//        cout << temp->data << "-->";
//        temp = temp->next;
//    }
//    cout << "NULL" << endl;
//}
//
//int main() {
//    node* head = buildLinkedList();
//    print(head);
//    head = deleteEL(head, 3);
//    print(head);
//
//    return 0;
//}






//************** reverse a linklist *****************************
//#include<iostream>
//using namespace std;
//
//class node {
//public:
//    int data;
//    node* next;
//    
//    // Constructor
//    node(int data) {
//        this->data = data;
//        this->next = NULL;
//    }
//};
//
//node* buildLinkedList() {
//    node* head = NULL;
//    node* tail = NULL;
//    
//    int data;
//    cin >> data;
//    while (data != -1) {
//        node* n = new node(data);
//        if (head == NULL) {
//            head = n;
//            tail = n;
//        } else {
//            tail->next = n;
//            tail = n;
//        }
//        cin >> data;
//    }
//    return head;
//}
//
//node* reverse(node* &head) {
//    node* prevptr = NULL;
//    node* crnt = head;
//    node* nextptr;
//    while (crnt != NULL) {
//        nextptr = crnt->next;
//        crnt->next = prevptr;
//        prevptr = crnt;
//        crnt = nextptr;
//    }
//    head = prevptr;
//    return head;
//}
//
//node* revRecursively(node* & head){
//	
//	if(head==NULL || head->next==NULL){
//		return head;
//	}
//	
//	node* newHead=revRecursively(head->next);
//	head->next->next=head;
//	head->next=NULL;
//	
//	return newHead;
//}
//
//void print(node* head) {
//    node* temp = head;
//    while (temp != NULL) {
//        cout << temp->data << "-->";
//        temp = temp->next;
//    }
//    cout << "NULL" << endl;
//}
//
//int main() {
//    node* head = buildLinkedList();
//    print(head);
//    node* newHead = revRecursively(head);
//    print(newHead);
//
//    return 0;
//}




//********************** reversing k nodes ************************
//#include<iostream>
//using namespace std;
//
//class node {
//public:
//    int data;
//    node* next;
//    
//    // Constructor
//    node(int data) {
//        this->data = data;
//        this->next = NULL;
//    }
//};
//
//node* buildLinkedList() {
//    node* head = NULL;
//    node* tail = NULL;
//    
//    int data;
//    cin >> data;
//    while (data != -1) {
//        node* n = new node(data);
//        if (head == NULL) {
//            head = n;
//            tail = n;
//        } else {
//            tail->next = n;
//            tail = n;
//        }
//        cin >> data;
//    }
//    return head;
//}
//
//node* reverseK(node* &head ,int k){
//	if(head==NULL)return NULL;
//	
//	
//	node* prev=NULL;
//	node* crnt=head;
//	node* nextptr=NULL;
//	
//	int count=0;
//	 while(crnt!=NULL && count<k){
//	 	nextptr=crnt->next;
//	 	crnt->next=prev;
//	 	prev=crnt;
//	 	crnt=nextptr;
//	 	count++;
//	 }
//	 if(nextptr!=NULL)
//	 head->next = reverseK(nextptr,k);
//	 
//	 return prev;
//}
//
//void print(node* head) {
//    node* temp = head;
//    while (temp != NULL) {
//        cout << temp->data << "-->";
//        temp = temp->next;
//    }
//    cout << "NULL" << endl;
//}
//
//int main() {
//    node* head = buildLinkedList();
//    print(head);
//    node* newHead = reverseK(head,2);
//    print(newHead);
//
//    return 0;
//}


#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		//constructor
		node(int data){
			this->data=data;
			next=NULL;
		}
};

//how to take linklist input from user
node* buildLinkedList(){
	
	node* head=NULL;
	node* tail=NULL;
	
	int data;
	cin>>data;
	while(data!=-1){
		if(head==NULL){
			node* n= new node(data);
			head=n;
			tail=n;
		}
		else{
			node* n= new node(data);
			tail->next=n;
			tail=n;	
		}
		cin>>data;
	}
	return head;
}

int length(node* head){
	int len=0;
	node* temp=head;
	while(temp!=NULL){
		temp=temp->next;
		len++;
	}
	return len;
}

node* MiddleLinkedList(node* head){
	//**************************************  length find karne alwi approach *****************************
//	int len=length(head);
//	int mid=(len-1)/2;
//	node* temp=head;
//	for(int i=0;i<mid;i++){
//		temp=temp->next;
//	}
//	return temp;



//************************ using slow and fast pointers /hare and tortoise/flyod algotrithm**************
if(head==NULL){
	return head;
}
node* slow=head;
node* fast =head->next;

while(fast!=NULL && fast->next!=NULL){
	slow=slow->next;
	fast=fast->next->next;
}
return slow;
}

void print(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}


int main()
{
	node* head=buildLinkedList();
	print(head);
	node* midNode=MiddleLinkedList(head);
	if(midNode==NULL){
		cout<<"Middle does not exist"<<endl;
	}
	else{
	cout<<"Middle node: "<<midNode->data<<endl;
	}

}