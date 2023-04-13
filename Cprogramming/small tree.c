#include <stdio.h>
int main(void)
{
    int x, y;
    for(y = 0;y <= 5; y++)
        {
            for(x=5;y < x; x--)
            {
                printf("*");
            }
            printf("\n");
        }
return 0;
}