#include <stdio.h>

#define MAX 100

void clear_input(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
    }
}

int read_int(const char *prompt, int *value)
{
    printf("%s", prompt);
    if (scanf("%d", value) == 1)
    {
        return 1;
    }
    clear_input();
    return 0;
}

void display_list(const int a[], int n)
{
    int i;
    if (n == 0)
    {
        printf("List is empty\n");
        return;
    }

    printf("List: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(void)
{
    int a[MAX];
    int n = 0;
    int choice;
    int x;
    int pos;
    int i;
    int found;

    while (1)
    {
        printf("\n1. Insert\n2. Search\n3. Delete\n4. Display\n5. Exit\n");
        if (!read_int("Enter choice: ", &choice))
        {
            printf("Please enter a number only\n");
            continue;
        }

        switch (choice)
        {
        case 1:
            if (n == MAX)
            {
                printf("List is full\n");
                break;
            }
            if (!read_int("Enter number: ", &x))
            {
                printf("Please enter a valid number\n");
                break;
            }
            a[n++] = x;
            printf("Inserted\n");
            break;

        case 2:
            if (!read_int("Enter number to search: ", &x))
            {
                printf("Please enter a valid number\n");
                break;
            }
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (a[i] == x)
                {
                    printf("Found at position %d\n", i + 1);
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Not found\n");
            }
            break;

        case 3:
            if (!read_int("Enter position to delete: ", &pos))
            {
                printf("Please enter a valid position\n");
                break;
            }
            if (pos < 1 || pos > n)
            {
                printf("Invalid position\n");
                break;
            }
            for (i = pos - 1; i < n - 1; i++)
            {
                a[i] = a[i + 1];
            }
            n--;
            printf("Deleted\n");
            break;

        case 4:
            display_list(a, n);
            break;

        case 5:
            return 0;

        default:
            printf("Invalid choice\n");
            break;
        }
    }
}
