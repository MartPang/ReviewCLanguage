/*For循环   */

#include <stdio.h>

int main(void)
{
    int i;
    /*
    for (A;B;C)     首先执行A语句，A可以为赋值语句，也可以直接定义变量也可以，也可以直接为空
    {               之后判断B是否成立，成立执行D语句，不成立直接跳过循环。B也可以是其他语句，如果值非零，则继续循环
        D;          D执行之后进行C语句，之后跳过A语句，判断B语句
    }               之后继续循环，知道循环结束
    */

    for (i = 1; i <= 100; i++) //这里的三个语句都可以为空，但是分号不能省
    {
        printf("%d\n", i);
    }
    return 0;
}
