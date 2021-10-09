#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data ;
    struct Node*next ;
    struct Node *prev ;

};
 void linkedListTraversal(struct Node*ptr){
     while (ptr!=NULL)
     {
         printf("Element : %d \n",ptr->data );
           ptr=ptr->next ;
     }
 }
 struct Node*insertAtFirst(struct Node*head,int data){
     struct Node*ptr=(struct Node*)malloc(sizeof (struct Node));
     ptr->next=NULL;
     ptr->prev =NULL;
     ptr->data =data;
     ptr->next=head;
     head->prev=ptr;
     head=ptr; 
    return head;
 }
 int main ()
 {
     struct Node *head;
     struct Node * second;
  struct Node * third;
  //alocate memory for nodes in linked in heap
  head = (struct Node *)malloc(sizeof (struct Node));
  second = (struct Node *)malloc(sizeof (struct Node));
 third= (struct Node *)malloc(sizeof (struct Node));

 head->data=7;
 head->next=second;

 second->data=11;
 second->next=third;

 third->data=15;
 third->next=NULL;

 printf("Linked List befor insertion\n");
 linkedListTraversal(head);
 head=insertAtFirst(head,56);//For deliting the first element 
head=insertAtFirst(head,565);
head=insertAtFirst(head,5566);
 printf("Linked List after insertion\n");
 linkedListTraversal(head);

 return 0;
   

 }
