#include<stdio.h>
#include<malloc.h> // :\ Don't know
struct table{
	int num;
	struct table *next;
};
void main(){
	int odd=0,even=0;
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
	while(move!=NULL){ //It will include the last node
	if(move->num%2==0){
		printf("Even\t%d\t\n",move->num);
		even=even+1;
	}
	else{
		printf("\nODD\t%d\t\n",move->num);
		odd=odd+1;
	}	
		move=move->next;
	}
	printf("\nCount of Even %d and Odd %d",even,odd);
}