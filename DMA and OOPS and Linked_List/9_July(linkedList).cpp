/***************************Merge two sorted linked list **************/
// #include<bits/stdc++.h>
// using namespace std;
// class ListNode {
// public:
// };
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* temp1 = list1;
//         ListNode* temp2 = list2;
//         ListNode* dummy = new ListNode(-1);
//         ListNode* ans = dummy;
//         while(temp1!= NULL && temp2!= NULL){
//             if(temp1->val<temp2->val){
//               dummy->next = temp1;
//               temp1=temp1->next;
//               dummy = dummy->next;
//             }
//             else{
//                 dummy->next = temp2;
//                 temp2 = temp2->next;
//                 dummy = dummy->next;
//             }
//         }
//             while(temp1!=NULL){
//                  dummy->next = temp1;
//                  temp1=temp1->next;
//                  dummy = dummy->next;
//             }
//             while(temp2!=NULL){
//              dummy->next = temp2;
//               temp2 = temp2->next;
//               dummy = dummy->next;
//             }
//         return ans ->next;
//     }

/****************************linked list cycle *********88*/

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode *fast = head;
//         ListNode *slow = head;
        
//         if (head == NULL || head->next == NULL) {
//             return false;
//         }
      
//         do {
//             if (fast == NULL || fast->next == NULL) {
//                 return false;
//             }
//             fast = fast->next->next;
//             slow = slow->next;
//         } while (slow != fast);
        
//         return true;
//     }
// };

/********************linked list cycle|| **************/

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         int pos = -1;
//         ListNode* fast = head;
//         ListNode* slow = head;
//         int position = -1;
//         if(head == NULL || head->next == NULL){
//            return NULL;
//         }
//        do {
//          if(fast == NULL || fast->next == NULL){
//            return NULL;
//         }
//         slow = slow->next;
//         fast = fast->next->next;
//        }
//        while(slow!= fast);
//        //now move slow to head and move one step each
//        slow = head;
//        while(slow!= fast){
//         slow = slow->next;
//         fast = fast->next;
//        }
//        return slow;
//     }
// };

/*******************delete node in a linked list *******8*/


// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         node -> val = node->next->val;
//         node ->next = node->next->next;
//     }
// };