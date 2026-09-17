#include "header.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
// print a welcome
    printf("Welcome\n");

    if (argc < 4) {
        printf("HEY MAN, put 3 days of data\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}