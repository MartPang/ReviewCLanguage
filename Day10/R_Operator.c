/*operator——运算符*/

#include <stdio.h>

int main(void)
{
    //算数运算符
    int a = 10;
    int b = 103;
    int c, h;
    double e = 9.2;
    double f = 103.5;
    double g;
    c = b / a; //为b除以a的商,两整数相除的商仍为整数
    h = b % a; //为b除以a的余数，只能接受两个整数相除，得到的结果也是整数
    g = f / e; //两个实数相除的结果是双精度实数

    printf("%d,%f,%d", c, g, h);
}