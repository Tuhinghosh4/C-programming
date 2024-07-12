#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int n, ch, i, item, last_item;
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
void create(int n);
void insert_beg();
void insert_end();
void insert_mid();
void delete_beg();
void delete_end();
void delete_value();
void count_nodes();
void search_position();
void reverse();
void display();
int main()
{
    printf("Enter the number of values:");
    scanf("%d", &n);
    create(n);
    while (1)
    {
        printf("\nMENU\n1.INSERT AT BEGINNING\n2.INSERT AT END\n3.INSERT AT MIDDLE\n4.DELETE FROM BEGINNING\n5.DELETE FROM END");
        printf("\n6.DELETE ANY VALUE\n7.COUNT NUMBER OF NODES\n8.SEARCH POSITION\n9.REVERSE THE LIST\n10.DISPLAY\n11.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_beg();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_mid();
            break;
        case 4:
            delete_beg();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            delete_value();
            break;
        case 7:
            count_nodes();
            break;
        case 8:
            search_position();
            break;
        case 9:
            reverse();
            break;
        case 10:
            display();
            break;
        case 11:
            exit(0);
        }
    }
    return 0;
}
void create(int n)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    start = p;
    printf("Enter the item:");
    scanf("%d", &item);
    p->data = item;
    p->next = NULL;
    for (i = 2; i <= n; i++)
    {
        p->next = (struct node *)malloc(sizeof(struct node));
        p = p->next;
        printf("Enter the item:");
        scanf("%d", &item);
        p->data = item;
        p->next = NULL;
    }
    return;
}
void insert_beg()
{
    struct node *temp = NULL;
    printf("Enter the item:");
    scanf("%d", &item);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = start;
    start = temp;
    return;
}
void insert_end()
{
    struct node *temp, *p = start;
    printf("Enter the item:");
    scanf("%d", &item);
    while (p->next != 0)
    {
        p = p->next;
    }
    temp = (struct node *)malloc(sizeof(struct node));
    p->next = temp;
    temp->data = item;
    temp->next = NULL;
    return;
}
void insert_mid()
{
    struct node *temp, *p = start;
    printf("Enter the item after which you want to enter the new item:");
    scanf("%d", &last_item);
    printf("Enter the new item:");
    scanf("%d", &item);
    while (p->data != last_item)
    {
        p = p->next;
    }
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = p->next;
    p->next = temp;
    return;
}
void delete_beg()
{
    struct node *temp, *p = NULL;
    p = temp = start;
    start = temp->next;
    free(p);
    return;
}
void delete_end()
{
    struct node *temp, *p = start;
    while (p->next != NULL)
    {
        temp = p;
        p = p->next;
    }
    temp->next = NULL;
    free(p);
    return;
}
void delete_value()
{
    struct node *temp, *p = start;
    printf("Enter the item you want to delete:");
    scanf("%d", &item);
    if (start->data == item)
    {
        start = p->next;
        free(p);
    }
    else
    {
        while (p->data != item)
        {
            temp = p;
            p = p->next;
        }
        temp->next = p->next;
        free(p);
    }
    return;
}
void count_nodes()
{
    struct node *p = start;
    int count = 0;
    while (p != NULL)
    {
        p = p->next;
        count++;
    }
    printf("The total number of nodes are %d", count);
    return;
}
void search_position()
{
    struct node *p = start;
    int count = 0;
    printf("Enter the value you want to search:");
    scanf("%d", &item);
    while (p->data != item)
    {
        p = p->next;
        if (p == NULL)
        {
            printf("%d is not present in the linked list", item);
            return;
        }
        else
        {
            count++;
        }
    }
    printf("%d is found at node number %d", item, count + 1);
    return;
}
void reverse()
{
    struct node *current = start, *previous = NULL, *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    start = previous;
    return;
}
void display()
{
    struct node *p = start;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    return;
}