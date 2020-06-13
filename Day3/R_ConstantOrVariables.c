/*Constant:常量     Variables:变量*/

#include <stdio.h>

int main(void)
{
    double a = 12e-5;
    printf("%f\n", a);
    //指数用数字加E/e表示，E/e后为10的指数

    char ch = 'a';        //只能用单引号，且C敏感大小写
    char ch1[] = "CHINA"; //字符串必须双引号
    printf("%c\n", ch);
    printf("%s\n", ch1);

    printf("这是单撇号\'");
    printf("这是双撇号\"");
    printf("这是问号\?");
    printf("这是反斜线\\\n");

    printf("这是警告\a");
    printf("这是退格\b");
    printf("这是换页\f");
    printf("这是换行\n");
    printf("这是回车\r");
    printf("这是水平制表符\t");
    printf("这是垂直制表符\v\n");

    printf("转换为ASCII码对应的字符\123\n");
    printf("转换为ASCII码对应的字符\x2B");

    int x1max = 2147483647;
    int x1min = -2147483648; //int类型：-2^31~2^31-1

    short int x2max = 32767;
    short int x2min = -32768; //short（short int）类型：-2^15~2^15-1

    //long不同平台不确定取值，不推荐使用

    unsigned int x3max = 4294967295;
    unsigned int x3min = 0; //unsigned int:0~2^32-1
    //unsigned数据类型全为正值，最大为非unsigned类型的两倍
    //short类型同理

    float x4max = 3.4E38;
    float x4min = -3.4E-38;
    //float类型范围如上，可最多得到6位有效数字

    double x5max = 1.7E308;
    double x5min = -1.7E-308;
    //double类型范围如上，最多15位有效数字

    //long double不同平台不确定取值

    char x6 = 'A'; //char类型为0-127，即标准ASCII码所规定的

    return 0;
}