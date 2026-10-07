// 偶数番目はウサギ、奇数番目はカメ、番号が10の倍数の時は休憩ウサギを表示せよ
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 20; i++)
    {
        printf("%2d: %s\n", i, (i % 10 == 0) ? "休憩ウサギ" : (i % 2 == 0) ? "ウサギ"
                                                                           : "カメ");
    }
    return 0;
}
