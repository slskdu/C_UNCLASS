#include <stdio.h>

int main(void)
{
    int pr, mo, ot, th, fhu, hu;
    // int ot = 0;
    // int th = 0;
    // int fhu = 0;
    // int hu = 0;
    printf("물건 값을 입력하시오. :");
    scanf("%d",&pr);
    printf("투입한 금액을 입력하시오. :");
    scanf("%d",&mo);
    ot = pr-mo;
    th = ot/1000;
    ot = ot - th*1000;
    fhu = ot/500;
    ot = ot - fhu*500;
    hu = ot/100;
    printf("거스름돈은 다음과 같습니다.\n");
    printf("천원권: %d\n",th);
    printf("오백원 동전: %d\n",fhu);
    printf("천원권: %d\n",hu);
}