#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void count_nodes(struct node *list)
{
    int count = 0;
    struct node *point;
    if (list->link == NULL)
    {
        printf("list is empty");
    }

    point = list;
    while (point != NULL)
    {
        count++;
        point = point->link;
    }
    printf("total node count %d\n", count);
}
void print_nodes(struct node *list)
{
    struct node *point;
    if (list->link == NULL)
    {
        printf("List Empty");
    }
    point = list;
    while (point != NULL)
    {
        printf("%d\n", point->data);
        point = point->link;
    }
}
int main()
{
    struct node *head, *current, *new;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 50;
    current->link = NULL;
    head->link = current;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;
    count_nodes(head);
    print_nodes(head);
    // printf("%d\n", head->link->link->data);
    // printf("%d\n", current->data);
    return 0;
}