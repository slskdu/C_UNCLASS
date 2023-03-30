#include <stdio.h>

int main(void)
{
    char op;
    int x,y;

    printf("수식을 입력하십시오.\n");
    scanf("%d %c %d",&x,&op,&y);

    switch (op)
    {
        case '+':
        printf("%d %c %d = %d",x,op,y,x+y);
        break;
        case '-':
        printf("%d %c %d = %d",x,op,y,x-y);
        break;
        case '*':
        printf("%d %c %d = %d",x,op,y,x*y);
        break;
        case '/':
        printf("%d %c %d = %d",x,op,y,x/y);
        break;

    }
}