#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void traversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr->next != NULL);
    printf("_______________\n");
    ptr = ptr->prev;
    ptr = ptr->prev;
    printf("%d\n", ptr->data);
}
// Insert at First
 struct node * InsertFirst(struct Node * head, int value)
{
   struct Node* ptr= (struct Node *)malloc(sizeof(struct Node));
   ptr->data=value;
//    struct Node * p= head;
//    do{
//        p=p->next;
//    }while(p->next!=head);
  ptr->prev=NULL;
  ptr->next=head;
  if(head!=NULL){

  head->prev-ptr;
  }
   head=ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;
    //allocate memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));

    //Connecting the nodes
    head->data = 7;
    head->next = second;
    head->prev = NULL;

    second->data = 66;
    second->next = third;
    second->prev = head;

    third->data = 96;
    third->next = four;
    third->prev = second;

    four->data = 69;
    four->next = NULL;
    four->prev = third;

    traversal(head);
    // head= InsertFirst(head,80);
    // printf("_______________\n");
    // traversal(head);
    head = InsertFirst(head, 199);
    printf("_______________\n");
    traversal(head);
    // printf("Head is %d\n",*head);
    return 0;
}