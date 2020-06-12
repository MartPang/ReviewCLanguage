//Review fuction printf()

#include <stdio.h>

int main(void)
{
    //Basic-1："%d"
    int a = 10;
    int b = 15;
    printf("%d %d", a, b);
    printf("a=%d b=%d\n", a, b); //原样输出
    //"%5d"指域宽，即输出的数据所占的列数，数据靠右排列，左侧可以空下
    int c = 987;
    printf("%5d\n", c);

    //Basic-2:"%c":输出一个字符，也可指定域宽"%5c"
    char ch = 'a';
    printf("%c\n", ch);
    printf("%5c\n", ch);

    /*Special:
    整数作为字符输出时转换为ASCII码（在0-127范围内）中对应的字符
    超出0-127的用二进制判断，取第一个字节转换为字符
    字符作为整数输出时转换为ASCII码中对应的整数*/
    int d = 121;
    char ch1 = '@';
    printf("%c\n", d);
    printf("%d\n", ch1);

    //Basic-3:"%s"
    char str[] = "CHINA";
    printf("%s\n", str); //输出字符串，用双引号包裹

    //Basic-4："%f"
    float e = 23.33435632;
    printf("%f\n", e); //输出全部整数和六位小数

    /*Special：
    20指占位20列,靠右排列；15指20位中的15位为小数部分；
    超出原数据位数用0填充，未超出部分四舍五入
    注意：float类型仅保证6-7位有效数字，double可保证15位有效数字*/
    double f = 0.2333333333333;
    printf("%25.21f\n", f);
    printf("%-25.21f\n", f); //负号指左对齐，右补空格

    //Basic-5:"%e":以指数形式输出
    double g = 13.2345234;
    printf("%e\n", g);
    //"%5.3e"规则与%f类似

    //Basic-6：其余的不常见类型
}