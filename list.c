#include <stdio.h>

#define MAX 100

int main() {
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
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Please enter a number only\n");
            while (getchar() != '\n')
            {
            }
            continue;
        }

        switch (choice)
        {
            case 1:
                if (n == MAX)
                {
                    printf("List is full\n");
                }
                else
                {
                    printf("Enter number: ");
                    if (scanf("%d", &x) != 1)
                    {
                        printf("Please enter a valid number\n");
                        while (getchar() != '\n')
                        {
                        }
                        continue;
                    }
                    a[n] = x;
                    n = n + 1;
                    printf("Inserted\n");
                }
                break;

            case 2:
                printf("Enter number to search: ");
                if (scanf("%d", &x) != 1)
                {
                    printf("Please enter a valid number\n");
                    while (getchar() != '\n')
                    {
                    }
                    continue;
                }
                found = 0;
                for (i = 0; i < n; i = i + 1)
                {
                    if (a[i] == x)
                    {
                        printf("Found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("Not found\n");
                }
                break;

            case 3:
                printf("Enter position to delete: ");
                if (scanf("%d", &pos) != 1)
                {
                    printf("Please enter a valid position\n");
                    while (getchar() != '\n')
                    {
                    }
                    continue;
                }
                if (pos < 1 || pos > n)
                {
                    printf("Invalid position\n");
                }
                else
                {
                    for (i = pos - 1; i < n - 1; i = i + 1)
                    {
                        a[i] = a[i + 1];
                    }
                    n = n - 1;
                    printf("Deleted\n");
                }
                break;

            case 4:
                if (n == 0)
                {
                    printf("List is empty\n");
                }
                else
                {
                    printf("List: ");
                    for (i = 0; i < n; i = i + 1)
                    {
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
                break;
        }

    }

    return 0;
}
