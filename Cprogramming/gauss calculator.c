#include <stdio.h>

int main(void)
{
    int n;
    int i = 1;
    int rs = 0;

    printf("정수를 입력하시오:");
    scanf("%d",&n);

    while(i<=n)
    {
        rs +=i;
        i++;
    }
    printf("1부터 %d까지의 합은 %d입니다.",n,rs);
}