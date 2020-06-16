/*IF 判断语句*/

#include <stdio.h>

int main(void)
{
    int x = 10;
    if (x > 5)
    {
        printf("X1");
    }
    else
    {
        printf("X2");
    }
    //以上为第一类方式
    if (x > 5)
        printf("x1");
    else if (x == 5)
        printf("x2");
    else
        printf("x3");
    //以上为第二类办法

    int a = 10;
    int b = 10;
    int c = 20;
    if (a == b && a == c)
        printf("&&是且的意思，两个都为真整个表达式为真");
    else if (a == b || a != c)
        printf("||两端的表达式有一个为真即为真");
    else
        printf("!为非的意思，！True=False");
    //三种符号中！优先级最高，&&次之，||最低
    return 0;
}