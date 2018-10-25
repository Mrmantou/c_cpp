/**
 * 有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？
 * 都是多少？
 * 
 * */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int i, j, k, count = 0;

    printf("the result:\n");

    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            if (j == i)
            {
                continue;
            }

            for (k = 1; k < 5; k++)
            {
                if (k != i && k != j)
                {
                    count++;
                    printf("%d,%d,%d\n", i, j, k);
                }
            }
        }
    }

    printf("total count: %d\n", count);

    return 0;
}
