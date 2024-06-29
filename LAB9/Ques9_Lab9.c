#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc != 5) {
        printf("Error: Please provide exactly four colors as arguments.\n");
        return 1;
    }

    printf("Number of arguments: %d\n", argc - 1);
    printf("Color 1: %s\n", argv[1]);
    printf("Color 2: %s\n", argv[2]);
    printf("Color 3: %s\n", argv[3]);

    printf("Color 4: %s\n", argv[4]);
    printf("Color 4: %s\n", argv[0]);
    return 0;
}
