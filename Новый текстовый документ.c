#include <stdio.h>

int main() {
    FILE *file;
    char filename[1];


    for (int i = 1; i <= 111111; ++i) {

        sprintf(filename, "file%d.txt", i);

        file = fopen(filename, "w");

        fclose(file);

    }

    return 0;
}