#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int arr[MAX_SIZE];
int count = 0;

void insert() {
    int pos, value;
    if (count == MAX_SIZE) {
        printf("List is full!\n");
        return;
    }
    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position (1 to %d): ", count + 1);
    scanf("%d", &pos);
    
    if (pos < 1 || pos > count + 1) {
        printf("Invalid position!\n");
        return;
    }
    
    for (int i = count; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    count++;
    printf("Element inserted successfully!\n");
}

void search() {
    int value, found = 0;
    printf("Enter value to search: ");
    scanf("%d", &value);
    
    for (int i = 0; i < count; i++) {
        if (arr[i] == value) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element not found!\n");
    }
}

void delete() {
    int pos;
    printf("Enter position to delete (1 to %d): ", count);
    scanf("%d", &pos);
    
    if (pos < 1 || pos > count) {
        printf("Invalid position!\n");
        return;
    }
    
    for (int i = pos - 1; i < count - 1; i++) {
        arr[i] = arr[i + 1];
    }
    count--;
    printf("Element deleted successfully!\n");
}

void display() {
    if (count == 0) {
        printf("List is empty!\n");
        return;
    }
    printf("List elements: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    
    while (1) {
        printf("\n=== List Menu ===\n");
        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                search();
                break;
            case 3:
                delete();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
