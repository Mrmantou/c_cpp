/**
 * 题目：企业发放的奖金根据利润提成。
 * 利润(I)低于或等于10万元时，奖金可提10%；
 * 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
 * 20万到40万之间时，高于20万元的部分，可提成5%；
 * 40万到60万之间时高于40万元的部分，可提成3%；
 * 60万到100万之间时，高于60万元的部分，可提成1.5%；
 * 高于100万元时，超过100万元的部分按1%提成。
 * 从键盘输入当月利润I，求应发放奖金总数？
 * */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double profit = 0;
    double bonus = 0;
    double bonus1 = 100000 * 0.1;
    double bonus2 = bonus1 + 100000 * 0.075;
    double bonus4 = bonus2 + 200000 * 0.05;
    double bonus6 = bonus4 + 200000 * 0.03;
    double bonus10 = bonus6 + 400000 * 0.015;

    /* code */
    printf("please input your profit: ");
    scanf("%lf", &profit);
    if (profit <= 100000)
    {
        bonus = profit * 0.1;
    }
    else if (profit <= 200000)
    {
        bonus = bonus1 + (profit - 100000) * 0.075;
    }
    else if (profit <= 400000)
    {
        bonus = bonus2 + (profit - 200000) * 0.05;
    }
    else if (profit <= 600000)
    {
        bonus = bonus4 + (profit - 400000) * 0.035;
    }
    else if (profit <= 1000000)
    {
        bonus = bonus6 + (profit - 600000) * 0.015;
    }
    else if (profit > 1000000)
    {
        bonus = bonus10 + (profit - 1000000) * 0.01;
    }

    printf("your bonus is : %lf\n", bonus);

    return 0;
}
