// A simple CPP program to introduce 
// a linked list 
#include <bits/stdc++.h> 
using namespace std; 

// class Node { 
// public: 
// 	int data; 
// 	Node* next; 
// }; 

// // Program to create a simple linked 
// // list with 3 nodes 
// int main() 
// { 
// 	Node* head = NULL; 
// 	Node* second = NULL; 
// 	Node* third = NULL; 

// 	// allocate 3 nodes in the heap 
// 	head = new Node(); 
// 	second = new Node(); 
// 	third = new Node(); 

// 	/* Three blocks have been allocated dynamically. 
// 	We have pointers to these three blocks as head, 
// 	second and third	 
// 	head		 second		 third 
// 		|			 |			 | 
// 		|			 |			 | 
// 	+---+-----+	 +----+----+	 +----+----+ 
// 	| # | # |	 | # | # |	 | # | # | 
// 	+---+-----+	 +----+----+	 +----+----+ 
	
// # represents any random value. 
// Data is random because we haven’t assigned 
// anything yet */

// 	head->data = 1; // assign data in first node 
// 	head->next = second; // Link first node with 
// 	// the second node 

// 	/* data has been assigned to the data part of first 
// 	block (block pointed by the head). And next 
// 	pointer of the first block points to second. 
// 	So they both are linked. 

// 	head		 second		 third 
// 		|			 |			 | 
// 		|			 |			 | 
// 	+---+---+	 +----+----+	 +-----+----+ 
// 	| 1 | o----->| # | # |	 | # | # | 
// 	+---+---+	 +----+----+	 +-----+----+	 
// */

// 	// assign data to second node 
// 	second->data = 2; 

// 	// Link second node with the third node 
// 	second->next = third; 

// 	/* data has been assigned to the data part of the second 
// 	block (block pointed by second). And next 
// 	pointer of the second block points to the third 
// 	block. So all three blocks are linked. 
	
// 	head		 second		 third 
// 		|			 |			 | 
// 		|			 |			 | 
// 	+---+---+	 +---+---+	 +----+----+ 
// 	| 1 | o----->| 2 | o-----> | # | # | 
// 	+---+---+	 +---+---+	 +----+----+	 */

// 	third->data = 3; // assign data to third node 
// 	third->next = NULL; 

// 	/* data has been assigned to the data part of the third 
// 	block (block pointed by third). And next pointer 
// 	of the third block is made NULL to indicate 
// 	that the linked list is terminated here. 

// 	We have the linked list ready. 

// 		head	 
// 			| 
// 			| 
// 		+---+---+	 +---+---+	 +----+------+ 
// 		| 1 | o----->| 2 | o-----> | 3 | NULL | 
// 		+---+---+	 +---+---+	 +----+------+	 
	
	
// 	Note that only the head is sufficient to represent 
// 	the whole list. We can traverse the complete 
// 	list by following the next pointers. */

// 	return 0; 
// } 







// // A simple C++ program for traversal of a linked list 
// #include <bits/stdc++.h> 
// using namespace std; 

// class Node { 
// public: 
// 	int data; 
// 	Node* next; 
// }; 

// // This function prints contents of linked list 
// // starting from the given node 
// void printList(Node* n) 
// { 
// 	while (n != NULL) { 
// 		cout << n->data << " "; 
// 		n = n->next; 
// 	} 
// } 

// // Driver code 
// int main() 
// { 
// 	Node* head = NULL; 
// 	Node* second = NULL; 
// 	Node* third = NULL; 

// 	// allocate 3 nodes in the heap 
// 	head = new Node(); 
// 	second = new Node(); 
// 	third = new Node(); 

// 	head->data = 1; // assign data in first node 
// 	head->next = second; // Link first node with second 

// 	second->data = 2; // assign data to second node 
// 	second->next = third; 

// 	third->data = 3; // assign data to third node 
// 	third->next = NULL; 

// 	printList(head); 

// 	return 0; 
// } 


class Node { 
public: 
	int data; 
	Node* next; 
};

//creating a linked list
int main() 
{
    Node *head, *newnode, *temp;
    head = 0;
    int choice =1;

    // T* a = (T*)malloc(sizeof(T)) becomes new T.
    // T* b = (T*)malloc(N * sizeof(T)) becomes new T[N].
    // free(a) becomes delete a.
    // free(b) becomes delete[] b.

    while (choice){
        newnode = (Node *) malloc(sizeof(Node));
        newnode->next = 0;
        cout << "please enter a value" << endl;
        cin >> newnode->data ;
        newnode->next =0;
        if(head == 0){
            head = temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
        cout << "do you want to 0continue (0, 1)? ";
        cin >> choice;
    }

    temp = head;
    while (temp != 0){
        cout << temp->data  << endl;
        temp = temp->next;
    }

    //inserting a node at begining
    newnode = (Node *)malloc(sizeof(Node));
    cout << "please enter a value" << endl;
    cin >> newnode->data ;
    newnode->next = head;
    head = newnode;

    //inserting an element at last
    newnode = (Node *) malloc(sizeof(Node));
    cout << "please enter a value" << endl;
    cin >> newnode->data ;
    

    temp = head;
    while (temp != 0){
        cout << temp->data  << endl;
        temp = temp->next;
        if (temp->next == 0){
            temp->next=newnode;
        }
    }

    cout << "after inserting at start and end" << endl;
    temp = head;
    while (temp != 0){
        cout << temp->data  << endl;
        temp = temp->next;
    }


    return 0;
}