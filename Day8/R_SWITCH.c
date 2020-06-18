/* Switch 判断*/

#include <stdio.h>

int main(void)
{
    int a = 10;
    switch (a) //switch括号内为要比较的变量
    {          //注意，变量不能为float/double类型，否则不会被匹配
    case 9:    //case后必须跟一个值和一个分号
        printf("9匹配成功");
        break; //必须有break语句，确保执行完这一句即结束switch判断
    case 10:
        printf("10匹配成功");
        break; //任意数量的case语句
    default:   //可选项，当全部匹配失败时执行这一句，可不写break
        printf("匹配失败了");
    }
    return 0;
}