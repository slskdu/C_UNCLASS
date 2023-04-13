#include <stdio.h>

int solution(int price,char grade)
{   
    int answer = 0;
    if(grade == "S")
    {
        answer = price - (price/100*5);
    }
    else if(grade == "G")
    {
        answer = price - (price/100*10);
    }
    else
    {
        answer = price - (price/100*15);
    }
    return answer;
}   
int main()
{
    int price;
    char grade;

    printf("가격과 등급을 입력하시오:");
    scanf("%d %c",&price,&grade);

    printf("할인된 금액은 %d입니다.",solution(price,grade));
    return 0;
}