#include <stdio.h>
#include <stdlib.h>
void count_nodes(struct node *);

struct node
{
    int data;
    struct node *link;
};
int main()
{
    
    int n;
    printf("Enter the number of values you want to enter:");
    scanf("%d", &n);
    struct node *head = malloc(sizeof(struct node));
    
    printf("\nEnter the values:");

    for (int i = 0; i < n; i++)
    {
        struct node *next = malloc(sizeof (struct node)); //allocating memory to each node.
        next->link=NULL;
        scanf("%d", next->data);
        head->link = next;
        head=next;
        
    }
    count_nodes(&head);
    
}
void count_nodes(struct node *head)
{
    int count=0;
    if (head == NULL)
    {
        printf("\nLinked list is empty");
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("%d",count);    
}