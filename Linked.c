#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};
void traversal(struct Node * ptr){
   // ptr= head;
    while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    //allocate memory
    head= (struct Node *)malloc(sizeof(struct Node));
    second= (struct Node *)malloc(sizeof(struct Node));
    third= (struct Node *)malloc(sizeof(struct Node));
    //Connecting the nodes
    head->data=7;
    head->next=second;

    second->data=66;
    second->next=third;

    
    third->data=96;
    third->next=NULL;

    traversal(head);

return 0;
}