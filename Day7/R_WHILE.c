/*while do_while 循环语句*/

#include <stdio.h>

int main(void)
{
    int a = 100;
    while (a > 1) //while(判断条件)，True——执行下程序段，False——跳过
    {
        printf("%d>1\n", a);
        a = a - 1;
    }

    do //do_while :至少执行一次循环，之后再判断while
    {
        printf("a=%d\n", a);
        a = a + 1;
    } while (a < 100); //注意分号

    return 0;
}