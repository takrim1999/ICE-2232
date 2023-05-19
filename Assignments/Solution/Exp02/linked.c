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
    else
    {
        point = list;
        while (point != NULL)
        {
            printf("%d\,", point->data);
            point = point->next;
        }
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
    int choice = 0, data = 0;
    while (choice != 6)
    {
        printf("Choose:\n1.Print List\n2.Insert at Begining\n3.Insert at end\n4.Insert at any place\n5.Delete\n6.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            print_list(head);
            break;
        case 2:
            printf("data: ");
            scanf("%d", &data);
            insert_at_beg(&head, data);
            break;
        case 3:
            printf("data: ");
            scanf("%d", &data);
            insert_at_end(head, data);
            break;
        case 4:
            int pos = 0;
            printf("position: ");
            scanf("%d", &pos);
            printf("data: ");
            scanf("%d", &data);
            insert_at_any(head, pos, data);
            break;
        case 5:
            printf("position: ");
            scanf("%d", &data);
            delete_node(&head, data);
            break;
        }
    }
    return 0;
}