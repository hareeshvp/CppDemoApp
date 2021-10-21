#include <stdio.h>
#include <stdlib.h>

extern int subfunction2(int value);

int subfunction1(int n) {
    int* ptr;
    int i;

    printf("Welcome to sub function 1\n");
    printf("Number of elements: %d\n", n);

    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }
    else {

        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");

        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Calling sub function 

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
            subfunction2(ptr[i]);
        }
    }

    printf("End of sub function 1\n");
    return 0;
}