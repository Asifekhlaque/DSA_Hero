# DSA_Hero
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
