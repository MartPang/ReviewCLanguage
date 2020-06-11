//Review fuction printf()

#include <stdio.h>

int main(void)
{
    //Basic-1
    int a = 10;
    int b = 15;
    printf("%d %d", a, b);
    printf("a=%d b=%d\n", a, b);

    //Basic-2:"%5d"指域宽，即输出的数据所占的列数，数据靠右排列，左侧可以空下
    int c = 987;
    printf("%5d\n", c);

    //Basic-3:"%d"——int;"%ld"——long;"&lld"——longlong

    int x1 = 10;
    long int x2 = 2341342;
    long long int x3 = 11111111111111;
    printf("x1=%d\nx2=%ld\nx3=%lld\n", x1, x2, x3);
}