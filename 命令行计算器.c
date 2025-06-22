#include <stdio.h>
//命令行计算器练习
int main() {
    char tool;
    float n1,n2;
    printf("输入操作符(+、-、*、/):");
    fflush(stdout);
    scanf("%c",&tool);
    printf("输入两个数字:):");
    fflush(stdout);
    scanf("%f %f",&n1,&n2);
    if(tool == '+') {
        printf("%.1f + %.1f = %.1f",n1,n2,n1+n2);
    }else if(tool == '*') {
        printf("%.1f * %.1f = %.1f",n1,n2,n1*n2);
    }else if(tool == '/') {
        printf("%.1f / %.1f = %.1f",n1,n2,n1/n2);
    }else if(tool == '-') {
        printf("%.1f - %.1f = %.1f",n1,n2,n1-n2);
    }else {
        puts("你输入的操作符有误。");
    }
    return 0;
}