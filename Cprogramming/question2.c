#include <stdio.h>

int main(void)
{
    int c,x,y;
    scanf("%d",&c);

    for(x=1;x<=c;x++)
    {
        for(y=1;y<=c-x;y++)
        {
            printf(" ");
        }
        for(y=1;y<=x;y++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


