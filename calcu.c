#include <stdio.h>

int main(void)
{
    double x,y,result ;
    printf("두개의 실수를 입력하시오:");
    scanf("%lf %lf",&x,&y);

    result = x+y;
    printf("%lf + %lf = %lf\n",x,y,result);
    result = x-y;
    printf("%lf - %lf = %lf\n",x,y,result);
    result = x*y;
    printf("%lf * %lf = %lf\n",x,y,result);
    result = x/y;
    printf("%lf / %lf = %lf\n",x,y,result);
    // 실수기 때문에 나머지가 없으므로 실행 안됨
    // result = x%y;
    // printf("%lf %% %lf = %lf",x,y,result);

    return 0;

}