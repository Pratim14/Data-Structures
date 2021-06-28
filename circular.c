#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};

void traversal(struct Node * head){
    struct Node * ptr= head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);
    
}
//Insert at First
struct node * InsertFirst(struct Node * head, int value)
{
   struct Node* ptr= (struct Node *)malloc(sizeof(struct Node));
   ptr->data=value;
   struct Node * p= head->next;
   do{
       p=p->next;
   }while(p->next!=head);
   p->next= ptr;
   ptr->next=head;
   head=ptr;
    return head;
}


int main(){
     struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * four;
    //allocate memory
    head= (struct Node *)malloc(sizeof(struct Node));
    second= (struct Node *)malloc(sizeof(struct Node));
    third= (struct Node *)malloc(sizeof(struct Node));
    four= (struct Node *)malloc(sizeof(struct Node));
    
    //Connecting the nodes
    head->data=7;
    head->next=second;

    second->data=66;
    second->next=third;

    
    third->data=96;
    third->next=four;

    four->data=69;
    third->next=head;


    traversal(head);
    head= InsertFirst(head,80);
    printf("_______________\n");
    traversal(head);
    head= InsertFirst(head,199);
    printf("_______________\n");
    traversal(head);
    
    printf("Head is %d\n",*head);
    return 0;
}