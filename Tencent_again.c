#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a = 0, sum = 0;
    char *tencent_secret_id = "AKIDzODdB1nOELz0T8CEjTEkgKJOob3t2Tos", *tencent_secret_key = "6aHHkz236LOYu0nRuBwn5PwT0x3km7LE";
    for (a = 1; a <= 10; a++)
        sum += a;
    printf("total is %d.\n", sum);
    return 0;
}
