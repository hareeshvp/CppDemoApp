#include <stdio.h>
#include <stdlib.h>

extern int subfunction(int value);

int main()
{
    int* ptr;
    int n, i;

    printf("Welcome to main function\n");

    n = 10;
    printf("Number of elements: %d\n", n);

    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));


    char* newStringInMain = (char*)malloc(10);

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
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
            subfunction(ptr[i]);
        }
    }

    free(newStringInMain);

    printf("End of main function\n");
    return 0;
}
