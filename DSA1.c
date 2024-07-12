#include <stdio.h>
#define SIZE 10
int arr[SIZE];
int n, end_index;
void insert_first();
void insert_last();
void insert_given();
void delete_element();
void display();
int main()
{
    printf("Enter number of elements in the array:");
    scanf("%d", &n);
    end_index = n - 1;
    int i;
    for (i = 0; i <= end_index; i++)
    {
        printf("Enter %d element of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    while (1)
    {
        printf("\nARRAY MENU\n1. INSERT AT THE FIRST POSITION\n2. INSERT AT THE LAST POSITION\n3. INSERT AT A GIVEN POSITION\n4. DELETE A GIVEN ELEMENT\n5. DISPLAY THE ARRAY\n6. EXIT");
        int  ch;
        printf("\n ENTER YOUR CHOICE: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_first();
            break;
        case 2:
            insert_last();
            break;
        case 3:
            insert_given();
            break;
        case 4:
            delete_element();
            break;
        case 5:
            display();
            break;
        case 6:
            return 0;
        }
    }
    return 0;
}
void insert_first()
{
    int num, i;
    printf("ENTER THE ELEMENT FOR THE FIRST POSITION:");
    scanf("%d", &num);
    end_index++;
    for (i = end_index; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = num;
    for (i = 0; i <= end_index; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}
void insert_last()
{
    int num, i;
    printf("ENTER THE ELEMENT FOR THE LAST POSITION:");
    scanf("%d", &num);
    end_index++;
    arr[end_index] = num;
    for (i = 0; i <= end_index; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}
void insert_given()
{
    int num, i, p;
    printf("Enter the index at which you want to enter the number: ");
    scanf("%d", &p);
    printf("Enter the number: ");
    scanf("%d", &num);
    end_index++;
    for (i = end_index; i > p; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[p] = num;
    for (i = 0; i <= end_index; i++)
    {
        printf("%d ", arr[i]);
    }
}
void delete_element()
{
    int p, i, x;
    printf("Enter the element you want to delete:");
    scanf("%d", &p);
    for (i = 0; i <= end_index; i++)
    {
        if (arr[i] == p)
        {
            x = i;
        }
    }
    for (i = x; i <= end_index; i++)
    {
        arr[i] = arr[i + 1];
    }
    end_index--;
    for (i = 0; i <= end_index; i++)
    {
        printf("%d ", arr[i]);
    }
}
void display()
{
    int i;
    for (i = 0; i <= end_index; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}