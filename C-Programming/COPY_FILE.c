#include<stdio.h>

// Program to copy the contents of one file to another

int main() {
    FILE *source, *target;
    char c;
    source = fopen("./Copy/file1.txt","r");
    target = fopen("./Copy/file2.txt","w");
    while((c=fgetc(source))!=EOF) {
        fputc(c,target);
    }
    fclose(source);
    fclose(target);
    return 0;
}