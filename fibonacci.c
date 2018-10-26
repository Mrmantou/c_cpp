#include <stdio.h>

int GetFibonacciRecursion(int n);
int GetFibonacciIteration(int n);

int main(int argc, char const *argv[])
{
    /* code */
    int i = 1;
    for (; i < 15; i++)
    {
        printf("index:%d\t->\t%d\n", i, GetFibonacciIteration(i));
    }

    return 0;
}

/**
 * 求解第n个裴波那契数列  递归
 * */
int GetFibonacciRecursion(int n)
{
    if (n < 1)
    {
        return -1;
    }

    if (n <= 2)
    {
        return 1;
    }

    return GetFibonacciRecursion(n - 1) + GetFibonacciRecursion(n - 2);
}

/**
 * 求解第n个裴波那契数列  迭代
 * */
int GetFibonacciIteration(int n)
{
    int fn_1 = 1, fn_2 = 1, fn;
    int i = 3, tmp;
    if (n < 1)
    {
        return -1;
    }

    if (n <= 2)
    {
        return 1;
    }

    for (; i <= n; i++)
    {
        fn = fn_1 + fn_2;
        fn_2 = fn_1;
        fn_1 = fn;
    }

    return fn;
}
