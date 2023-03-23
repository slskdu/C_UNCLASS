#include <stdio.h>

int main()
{
    int x,y,z;

    x = 472;
    y = 385;

    printf("%d\n",x*(y%10));
    printf("%d\n",x*(y/10%10));
    printf("%d\n",x*(y/100));

}