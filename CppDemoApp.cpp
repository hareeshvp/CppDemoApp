#include <stdio.h>
#include <stdlib.h>

extern int subfunction1(int n);

int main()
{
    printf("Welcome to main function\n");

    char* newStringInMain = (char*)malloc(10);

    if (newStringInMain == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        subfunction1(10);
    }

    free(newStringInMain);

    printf("End of main function\n");
    return 0;
}
