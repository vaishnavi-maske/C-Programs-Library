#include <stdio.h>
int main() {
    FILE *fp;
    char data[] = "Hello, this is a file I/O example in C.";
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "%s\n", data);
    fclose(fp);

    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char ch;
    printf("Reading from file: ");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
