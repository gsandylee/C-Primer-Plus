#include <stdio.h>
#define INITIAL_MONEY 100			//账户初始金额为100万元
#define ANNUAL_RATE 0.08			//年利率为8%
int main(void)
{
    int year;
    double money;
    
    for(year = 1, money=INITIAL_MONEY; money>=10; year++)
        money += money * ANNUAL_RATE - 10;			//计算每年年终的账户余额
    
    money += money * ANNUAL_RATE;//最后余额先结息
    
    for (; money >= 10; year++)//最后余额结息超10万
        money += money * ANNUAL_RATE - 10;
    
    printf("After %d years, Chuckie will draw all money from his account.\n", year);
    printf("%f\n",money);//最后一次取款金额不会为负数。
    return 0;
}
