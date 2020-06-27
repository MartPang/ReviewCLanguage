/*Character array——字符串*/

#include <stdio.h>
#include <string.h> //字符串函数库

int main(void)
{
    char c[4];
    c[0] = 'I';
    c[1] = ' ';
    c[2] = 'a';
    c[3] = 'm'; //c为数组，储存的为"I am"字符串

    //上方和以下几种为初始化字符串的一些方法
    char c1[4] = {'I', ' ', 'a', 'm'};
    char c2[] = {'I', ' ', 'a', 'm'};  //系统自动确定下标
    char c3[5] = {'I', ' ', 'a', 'm'}; //多出的位置由'\0'填补

    /*系统检测字符串结束的标志为'\0'字符
    一般会自动在尾端添加'\0',也可以手动添加
    以下语句等价*/
    char d1[2] = {'A', 'A'};
    char d2[2] = {'A', 'A', '\0'};

    printf("%s", d1);    //输出整个字符串
    printf("%c", d1[0]); //输出单个字符
    //不输出'\0',且遇到第一个'\0'即停止输出
    puts(d1); //使用puts可以输出该字符串，且输出后自动换行，但是只能输出1个

    char e[10];
    scanf("%s", e); //注意，字符串e长度必须大于输入的字符个数
    gets(e);        //使用gets可以输入一个字符串，但是只能输入1个

    char str1[5], str2[5], str3[5], str0[13];
    scanf("%s%s%s", str1, str2, str3);
    scanf("%s", str0);
    /*
    以输入 how are you?为例，因为系统监测不同字符串的标准为空格
    str1为：'h','o','w','\0','\0'
    str2为：'a','r','e','\0','\0'
    str3为：'y','o','u','?','\0'
    str0为：'h','o','w','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'
    */

    //以下函数都需要include <string.h>
    char f1[30] = {"People's Republic of"};
    char f2[] = {"China"};
    printf("%s", strcat(f1, f2)); //把f2拼接到f1后面，结果放在f1中

    char g1[10], g2[] = {"China"};
    strcpy(g1, g2); //把g2复制到g1中,g2也可以为字符串常量
    /*由于g1未初始化，内容未知，复制后仅覆盖了前6个空间，剩下的4个未知
    注意！:g2=g1为非法语句，不能使用;g2="China"也是非法的*/
    strncpy(g1, g2, 3); //复制g2的前3个字符到g1中

    char h1[3] = {"CAT"};
    char h2[3] = {"Dog"};
    strcmp(h1, h2);
    //比较字符串,方法为至左向右逐一比较,直到出现不同或者遇到'\0'
    //如果两个字符串相同，为0
    //如果h1>h2,为正，反之为负

    char i[5] = {"China2233"};
    strlen(i); //输出字符串实际长度，不包括'\0'

    char j1[] = {"china"}, j2[] = {"CHINA"};
    strlwr(j2); //转换为小写
    strupr(j1); //转换为大写

    return 0;
}
