# DSA_Hero
# Linked List Overview

## What is a Linked List?

A linked list is a linear data structure where elements are stored in nodes, and each node points to the next node in the sequence. Unlike arrays, linked lists do not have a fixed size, and their elements are not stored in contiguous memory locations.
```c
Head --> [Data1 | Next] --> [Data2 | Next] --> [Data3 | Next] --> ... --> [DataN | Null]
```
## Basic Components

### Node

A node is the fundamental building block of a linked list. It consists of two parts:
- **Data:** The actual information or value stored in the node.
- **Next Pointer:** A reference or link to the next node in the sequence.

### Head

The head is the first node in a linked list. It serves as the starting point for traversing the list.

### Tail

The tail is the last node in a linked list. Its next pointer is typically set to null, indicating the end of the list.

## Types of Linked Lists

### Singly Linked List

In a singly linked list, each node points to the next node in the sequence, forming a unidirectional chain.

### Doubly Linked List

In a doubly linked list, each node has pointers to both the next and the previous nodes, allowing bidirectional traversal.

### Circular Linked List

A circular linked list is a variation where the last node points back to the first, forming a loop.

## Operations

### Insertion

Nodes can be inserted at the beginning, end, or at a specific position in a linked list.

### Deletion

Nodes can be removed from the list based on their value or position.

### Traversal

Traversing a linked list involves visiting each node in sequence, starting from the head.

## Advantages of Linked Lists

- **Dynamic Size:** Linked lists can easily grow or shrink in size.
- **Efficient Insertion/Deletion:** Adding or removing nodes is more efficient compared to arrays.

## Limitations

- **Random Access:** Accessing elements by index is not as efficient as in arrays.
- **Extra Memory:** Each node requires additional memory for the next pointer.

## Use Cases

Linked lists are particularly useful in scenarios where frequent insertion and deletion operations are performed, and the size of the data structure is unpredictable.

## Conclusion

Understanding linked lists is essential for developing a strong foundation in data structures. They provide flexibility and efficiency in certain situations, making them a valuable tool in software development.
# Linked List
Basic Creation and Insertion in linked list using c language.
```c
#include<stdio.h>
#include<malloc.h> 
struct table{
	int num;
	struct table *next;
};
void main(){
	struct table *head,*move,*newnode;
	head=(struct table*)malloc(sizeof(struct table));//Memory Allocated
	printf("Enter the value");
	scanf("%d",&head->num); //head or first node -> num value insert
	head->next=NULL;//memory address will be NULL
	move=head;
	for(int i=1;i<=4;i++){
	 newnode=(struct table*)malloc(sizeof(struct table));
	 printf("Enter the nodes value\t");
	 scanf("%d",&newnode->num);
	 newnode->next=NULL;//Important Line
	 move->next=newnode;
	 move=move->next;
	}
	move=head;
	while(move->next!=NULL){ //It will not include the last node
		printf("%d\t",move->num);
		move=move->next;
	}
	printf("\nNext LinkedList\n");
	move=head;
	while(move!=NULL){ //It will include the last node
		printf("%d\t",move->num);
		move=move->next;
	}
}
```
# Singly linked list 
- Add new node at the begning
```c
        // Create a Linked list
	// Add new node at the begning
	newnode=(struct table*)malloc(sizeof(struct table));
	printf("\nEnter the node:\t");
	scanf("%d",&newnode->num);
	newnode->next=head; // Store the value of head pointer
	head=newnode; // Now update the head pointer to the next node
	
	printf("\nUpdated LinkedList\n");
	move=head;
	while(move!=NULL){ //It will include the last node
		printf("%d\t",move->num);
		move=move->next;
	}
```
- Add new node at the end
```c
 // Create a Linked list
// Add new node at the end
	newnode=(struct table*)malloc(sizeof(struct table));
	printf("\nEnter the node:\t");
	scanf("%d",&newnode->num);
	newnode->next=NULL;
	move=head;
	while(move->next!=NULL){ // if you write move->!=NULL the loop condition will no true and you get no output
		move=move->next; // Moveing the while loop
	}
	move->next=newnode;
	
	printf("\nUpdated LinkedList\n");
	move=head;
	while(move!=NULL){ //It will include the last node
		printf("%d\t",move->num);
		move=move->next;
		count=count+1;
	}
```
- Create a Linked list
```c
int count=0,pos,i=1;
// Create a Linked list
move=head;
	while(move!=NULL){ //It will include the last node
		move=move->next;
		count=count+1;
	}
	printf("\nCout %d",count);
	// Add new node at the given location
	printf("\nEnter the location");
	scanf("%d",&pos);
	if(pos>count){
		printf("Invalid");
	}
	else{
		move=head;
		while(i<pos){
			move=move->next;
			i++;
		}
		newnode=(struct table*)malloc(sizeof(struct table));
		printf("\nEnter the value");
		scanf("%d",&newnode->num);
		newnode->next=move->next;
		move->next=newnode;
	}
	printf("\nUpdated LinkedList\n");
	move=head;
	while(move!=NULL){ //It will include the last node
		printf("%d\t",move->num);
		move=move->next;
	}
```