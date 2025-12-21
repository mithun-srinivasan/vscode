#include <stdio.h>

int main() {
    int arr[5], i;
    int largest, smallest;
    int key, found = 0;

    // Read array elements
    printf("Enter 5 elements:\n");
    fflush(stdout);
    for(i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        fflush(stdout);
        scanf("%d", &arr[i]);
    }

    // Initialize
    largest = arr[0];
    smallest = arr[0];

    // Find largest and smallest
    for(i = 1; i < 5; i++) {
        if(arr[i] > largest)
            largest = arr[i];
        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    // Linear search
    printf("Enter element to search: ");
    fflush(stdout);
    scanf("%d", &key);

    for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found at position %d\n", i);
    else
        printf("Element not found\n");

    return 0;
}
