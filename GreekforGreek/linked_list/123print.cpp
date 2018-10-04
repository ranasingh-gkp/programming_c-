#include <iostream>
//https://www.geeksforgeeks.org/linked-list-set-1-introduction/
using namespace std;
// A simple C program for traversal of a linked list


struct Node
{
int data;
struct Node *next;
};

// This function prints contents of linked list starting from
// the given node
void printList(struct Node *n)
{
while (n != NULL)
{
	cout << n->data << " ";
	n = n->next;
}
}

int main()
{
struct Node* head = NULL;
struct Node* second = NULL;
struct Node* third = NULL;

// allocate 3 nodes in the heap
head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));

head->data = 1; //assign data in first node
head->next = second; // Link first node with second

second->data = 2; //assign data to second node
second->next = third;

third->data = 3; //assign data to third node
third->next = NULL;

printList(head);

return 0;
}
