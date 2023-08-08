//c program to insert an element in an array
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, j, element;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n + 1];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the new element:\n");
    scanf("%d", &j);

    if (j >= 0 && j <= n) {
        printf("Enter the new element:\n");
        scanf("%d", &element);

        for (i = n; i > j; i--) {
            arr[i] = arr[i - 1];
        }
        arr[j] = element;
        n++;

        printf("The new array is:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid position for array insertion.\n");
    }
    return 0;
}

