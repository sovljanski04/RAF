#include <stdio.h>

/*
Napisati program koji za unet prirodni broj N iscrtava piramidu visine N na standardni izlaz.
*/

int main()
{
    int n;
    scanf("%d",&n);
    int brrazm=n-1;
    int brzv=1;
    for(int i=0;i<n;i++){
        for (int j=0;j<brrazm;j++)printf(" ");
        for (int j=0;j<brzv;j++) printf("*");
        brrazm--;
        brzv+=2;

        printf("\n");
    }
    return 0;
}