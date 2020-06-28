/*Function——函数*/

#include <stdio.h>

int Print(char a);
//调用函数时首先在main()前声明
//注意,这里需加分号
//前面的类型为函数的返回值类型
//括号内为形参,也需要声明数据类型
//没有形参，也需要加括号()

float Avera(float array[3]);
//声明形参为数组的函数时，可以不声明数组下标
//float Avera(float array[]);===>等价形式

float Avera2(float arrays[3][3]);
//多维数组作为形参时可以省略第一维的值，但是二维乃至更高维不可省略
//float Avera2(float arrays[][3])===>等价形式
//float Avera2(float arrays[][])====>非法形式

int main(void)
{
    char str = 'a';
    Print(str);
    //将str传递给函数作为参数
    //即使函数没有参数，也需要加括号()
    printf("%d", Print(str));
    //当函数不作为语句调用时，不必加括号

    float c[3] = {2.5, 3.5, 2.1};
    Avera(c); //向函数传递数组时直接传递数组名字，不需要"c[3]"这样

    return 0;
}

int Print(char a) //函数体，在这里写函数相关的语句
{
    printf("%c", a); //调用函数时a为str传递来的值
    return 0;        //return的类型由函数的声明确定，且与之相符
    //当函数声明为void时不得使用return语句

    /*形参与实参相对独立，两者之间进行值传递
    该值仅在函数调用期间有效
    内存中的存储单元不同，实参无法得到形参的值*/
}
float Avera(float array[3])
{
    return ((array[0] + array[1] + array[2]) / 3);
    //在传递数组时本质是地址的传递,后文指针会详细说
}
