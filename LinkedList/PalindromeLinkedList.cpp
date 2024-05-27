//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverse(Node* &head)
    {
        if(head==NULL)
            return NULL;
        Node *prev = NULL, *current = head, *next = NULL;
        while(current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    bool compareLinkedList(Node* temp1, Node* temp2)
    {
        while(temp1 && temp2)
        {
            if(temp1->data == temp2->data)
            {
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else
                return false;
        }
        if(temp1==NULL && temp2==NULL)
            return true;
        return false;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *slow = head, *fast = head;
        Node *prev_slow = NULL, *mid = NULL;
        Node *secondHead=NULL;
        bool result=true;
        if(head!=NULL && head->next!=NULL)
        {
            while(fast!=NULL && fast->next!=NULL)
            {
                fast = fast->next->next;
                prev_slow = slow;
                slow = slow->next;
            }
            if(fast!=NULL)
            {
                mid = slow;
                slow = slow->next;
            }
            prev_slow->next = NULL;
            secondHead = reverse(slow);
            result = compareLinkedList(head, secondHead);
            secondHead = reverse(secondHead);
            if(mid!=NULL)
            {
                prev_slow->next = mid;
                mid->next = secondHead;
            }
            else
                prev_slow->next = secondHead;
        }
        return result;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends