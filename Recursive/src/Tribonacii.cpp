#include "../include/Tribonacii.h"

using namespace LeetCode::Recursive;

int Tribonacii::Func2Callback(const int& n, int* arr)
{
    if (n >= 3 && -1 == arr[n])
    {
        arr[n] = Func2Callback(n - 1, arr) + Func2Callback(n - 2, arr) + Func2Callback(n - 3, arr);
    }

    return arr[n];
}

int Tribonacii::Func0(const int& n)
{
    switch (n)
    {
    case 0:
        return 0;
    case 1:
    case 2:
        return 1;
    default:
        break;
    }

    return Func0(n - 1) + Func0(n - 2) + Func0(n - 3);
}

int Tribonacii::Func1(const int& n)
{
    int curr = 0;
    int a = 0;
    int b = 1;
    int c = 1;
    switch (n)
    {
    case 0:
        return a;
    case 1:
        return b;
    case 2:
        return c;
    default:
        break;
    }
    for (int i = 3; i <= n; ++i)
    {
        curr = a + b + c;
        a = b;
        b = c;
        c = curr;
    }

    return curr;
}

int Tribonacii::Func2(const int& n)
{
    int res;
    int* tribonaciiNums = new int[n + 1];
    for (int i = 0; i <= n; ++i)
    {
        tribonaciiNums[i] = -1;
    }
    if (n >= 0)
    {
        tribonaciiNums[0] = 0;
    }
    if (n >= 1)
    {
        tribonaciiNums[1] = 1;
    }
    if (n >= 2)
    {
        tribonaciiNums[2] = 1;
    }
    res = Func2Callback(n, tribonaciiNums);
    delete[] tribonaciiNums;

    return res;
}