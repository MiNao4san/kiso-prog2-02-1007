// 三項演算子で、nが偶数か奇数かを判定して表示する
#include <stdio.h>

int main(void)
{
    signed char n = 127;
    n += 1;
    printf("%s\n", (n % 2 == 0) ? "偶数" : "奇数");
    printf("%d\n", n);
    return 0;
}
