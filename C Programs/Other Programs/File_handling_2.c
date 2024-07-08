#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *ftpr;

    printf("Opening the file");
    printf("\n");

    ftpr = fopen("Hello_World.txt","r");
    printf("\n");

    printf("File Opened");
    printf("\n");

    printf("Reading the file");
    printf("\n");

    printf("Content read successfully");
    printf("\n");

    printf("Closing the file");
    fclose(ftpr);   





   return 0;
}