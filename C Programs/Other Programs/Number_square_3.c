//  55555
//  44444
//  33333
//  22222
//  11111

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;

    for(i=5;i>=1;i--)
    {
        for(j=5;j>=1;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}