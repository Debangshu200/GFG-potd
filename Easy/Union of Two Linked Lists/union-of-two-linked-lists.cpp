//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};


// } Driver Code Ends
/*
// structure of the node is as follows

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // 
        map<int, bool> counts;
Node* temp1 = head1;
Node* temp2 = head2;

while (temp1 != NULL) {
    if (!counts[temp1->data]) {
        counts[temp1->data] = true;
    }
    temp1 = temp1->next;
}

while (temp2 != NULL) {
    if (!counts[temp2->data]) {
        counts[temp2->data] = true;
    }
    temp2 = temp2->next;
}

Node* newHead = NULL;
Node* newTail = NULL;

for (const auto& root : counts) {
    Node* newNode = new Node(root.first);

    if (newHead == NULL) {
        newHead = newNode;
        newTail = newNode;
    } else {
        newTail->next = newNode;
        newTail = newTail->next;
    }
}

return newHead;

        
    }
};


//{ Driver Code Starts.

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends