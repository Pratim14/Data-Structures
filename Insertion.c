#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr)
{
    // ptr= head;
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}
//Insert At First
struct Node *Insertfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
//Insert at an Index
struct Node *InsertIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// Insert at Last
struct Node *InsertLast(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
//Insert after a node
struct Node *InsertAfter(struct Node *head, int data,struct Node *index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    ptr->next=index->next;
    index->next=ptr;
  
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    //allocate memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    //Connecting the nodes
    head->data = 7;
    head->next = second;

    second->data = 66;
    second->next = third;

    third->data = 96;
    third->next = NULL;

    traversal(head);
    int n,choose;
    printf("\nType 1\n ");
    scanf("%d",&choose);
    while (2) 
    {
        printf("\n Press 0 to quit\n and 1 to continue \n ");
        printf("\n Enter your choice:\n 1- Enter at 1st \n 2- Insert at an Index \n 3- Insert at Last\n 4- Enter After 2nd Node \n");
        scanf("%d", &n);
        switch (n)
        {
        case 0:
        return 0; 
        break;
        case 1:
            head = Insertfirst(head, 69);
            printf("___________\n");
            traversal(head);
            break;
        case 2:
            head = InsertIndex(head, 99, 2);
            printf("___________\n");
            traversal(head);
            break;
        case 3:
            head = InsertLast(head, 121);
            printf("___________\n");
            traversal(head);
            break;
         case 4:
            head = InsertAfter(head, 255,second);
            printf("___________\n");
            traversal(head);
            break;
        }
    }

    return 0;
}