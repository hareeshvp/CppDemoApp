#include <stdio.h>
#include <stdlib.h>

int subfunction2(int value) {

    printf("Welcome to Sub function 2. Argument value is %d \n", value);
/*
    char* newStringInSub = (char*)malloc(10);

    switch (value)
    {
    case 1:
        printf("It is inside Case : %d\n", value);
        break;

    case 2:
        printf("It is inside Case : %d\n", value);
        break;

    case 3:
        printf("It is inside Case : %d\n", value);
        break;

    default:
        printf("It is inside default case with value : %d\n", value);
        return 0;
        break;
    }

    free(newStringInSub);
*/
    printf("End of Sub function 2.\n");
    return 0;
}
