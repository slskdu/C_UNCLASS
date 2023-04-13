#include <stdio.h>

int main(void)
{
    int i=1,n,a,b;

    scanf("%d",&n);
    while (n>=i)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
        i++;
    }
    
}