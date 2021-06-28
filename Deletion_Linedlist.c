#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
//Traversal
void traversal(struct Node *ptr)
{
    // ptr= head;
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *DeleteTillValue(struct Node *head)
{

    struct Node *p = head;
    struct Node *q = head->next;
    int value, i = 1;
    printf("\n Enter the value to be delted\n");
    scanf("%d",&value);
    while (q->data != value && q->next != NULL)
    {
        q=q->next;    
        p=p->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
}
    //Insertion at Last
    struct Node *InsertLast(struct Node * head, int data)
    {
        struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
        if (head == NULL)
        {
            ptr->next = head;
            ptr->data = data;
            return ptr;
        }
        else
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

    //Delete Node from first
    struct Node *Deletefirst(struct Node * head)
    {
        struct Node *ptr = head;

        head = head->next;
        free(ptr);
        return head;
    }
    //Delete after an Index
    struct Node *DeleteAfterIndex(struct Node * head)
    {
        struct Node *ptr = head;
        struct Node *q = head->next;

        int loc, i = 1;
        if (head == NULL)
        {
            printf("Cannot perform Deletion\n");
        }
        else
        {
            printf("\nEnter the location \n");
            scanf("%d", &loc);
            while (i != loc - 1)
            {
                ptr = ptr->next;
                q = q->next;

                i++;
            }
            ptr->next = q->next;
            free(q);
            return head;
        }
    }
    //Delete at Last
    struct Node *DeleteLast(struct Node * head)
    {
        struct Node *ptr = head;
        struct Node *q = head->next;

        int loc, i = 1;
        if (head == NULL)
        {
            printf("Cannot perform Deletion\n");
        }
        else
        {

            while (q->next != NULL)
            {
                ptr = ptr->next;
                q = q->next;

                i++;
            }
            ptr->next = NULL;
            free(q);
            return head;
        }
    }
    //Main Function
    int main()
    {
        struct Node *head = (struct Node *)malloc(sizeof(struct Node));
        head = NULL;
        int choice, value;
        // char c= "true";
        do
        {

            printf("\n Press 0 to quit\n ");
            printf("\n Enter your choice:\n 1- Delete at 1st \n 2- Delete after an Index \n 3- Delete at Last\n 4- Delete the node with specified value\n 5- Insert Node\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 0:
                return 0;
                break;
            case 1:
                head = Deletefirst(head);
                printf("___________\n");
                traversal(head);
                break;
            case 2:
                head = DeleteAfterIndex(head);
                printf("___________\n");
                traversal(head);
                break;
            case 3:
                head = DeleteLast(head);
                printf("___________\n");
                traversal(head);
                break;
            case 4:
                head = DeleteTillValue(head);
                printf("___________\n");
                traversal(head);
                break;
            case 5:
                printf("\nEnter the value you want to enter\n");
                scanf("%d", &value);
                head = InsertLast(head, value);
                printf("___________\n");
                traversal(head);
                break;
            }
        } while (1);
        return 0;
    }
