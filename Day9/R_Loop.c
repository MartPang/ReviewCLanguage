/*
C中的三种循环结构：
Ⅰ：do…while
Ⅱ：for
Ⅲ：while
*/

#include <stdio.h>

int main(void)
{
    int i = 10;
    for (; i <= 100; i++)
    {
        if (i > 50) //循环结构间可以相互嵌套，不限个数和嵌套数
            break;
        printf("%d\n", i);
    }
    printf("使用break跳出循环\n");
    //break:跳出循环体，执行循环体下方的语句，不再执行循环
    //break仅用于循环和switch，其余均不合法

    int n;
    for (n = 100; n <= 200; n++)
    {
        if (n % 3 == 0)
            continue;
        printf("%d\n", n);
    }
    printf("本次循环利用continue跳过了所有3的倍数\n");
    return 0;
    //continue：提前结束本次循环，跳过余下的语句，开始下一个循环
    //continue只用于循环语句
    //如果有多重循环嵌套，均只结束最内层循环
}