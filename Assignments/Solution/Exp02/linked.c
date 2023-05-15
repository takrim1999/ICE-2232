#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void print_list(struct node *list)
{
    struct node *point;
    if (list == NULL)
    {
        printf("List is empty\n");
    }
    point = list;
    while (point != NULL)
    {
        printf("%d\,", point->data);
        point = point->next;
    }
}

void insert_at_end(struct node *list, int num)
{
    struct node *point, *new;
    point = list;
    while (point->next != NULL)
    {
        point = point->next;
    }
    new = (struct node *)malloc(sizeof(struct node));
    new->data = num;
    new->next = NULL;
    point->next = new;
    // printf("%d\n", point->data);
}

// struct node *insert_at_beg(struct node *list, int num)
insert_at_beg(struct node **list, int num)
{
    struct node *point, *new;
    new = (struct node *)malloc(sizeof(struct node));
    // point = list;
    new->data = num;
    new->next = NULL;
    // new->next = point;
    new->next = *list;
    *list = new;
    // printf("%d\n", new->next->next->data);
    // list = new;
    // print_list(*list);
    // list = point;
    // return list;
}

void insert_at_any(struct node *list, int pos, int num)
{
    pos--;
    struct node *point;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = num;
    new->next = NULL;
    point = list;
    while (pos > 1)
    {
        point = point->next;
        pos--;
    }
    new->next = point->next;
    point->next = new;
    // printf("%d", point->data);
}

void delete_node(struct node **list, int pos)
{
    pos--;
    struct node *point;
    struct node *element;
    if (*list == NULL)
    {
        printf("list empty");
    }
    else
    {
        point = *list;
        while (pos > 1)
        {
            point = point->next;
            pos--;
        }
        element = point->next;
        point->next = point->next->next;
        free(element);
    }
}

int main()
{
    struct node *head, *current;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;
    // 1. traversing printing values
    // print_list(head);
    // 2. insert at end
    insert_at_end(head, 20);
    insert_at_end(head, 30);
    // print_list(head);
    // head = insert_at_beg(head, 80);
    insert_at_beg(&head, 70);
    insert_at_beg(&head, 80);
    insert_at_any(head, 4, 38);
    // print_list(head);
    delete_node(&head, 2);
    print_list(head);
}