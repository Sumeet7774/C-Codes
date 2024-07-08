#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *ftpr;

    printf("Opening the file");
    printf("\n");
    
    ftpr = fopen("Hello_World.txt","w");
    printf("\n");

    printf("File opened");
    printf("\n");

    printf("Writing to the file");
    printf("\n");

    printf("Appending to the file");
    printf("\n");

    fprintf(ftpr,"Welcome to the hello world file");
    fprintf(ftpr,"Sumeet");

    printf("Content appended");
    printf("\n");

    printf("Closing the file");
    fclose(ftpr);   

   return 0;
}