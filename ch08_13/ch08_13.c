#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

long factorial(long x);

int main()
{
    int i, n;
    double e = 0;

    printf("������ ����ұ��: ");
    scanf("%d", &n);
    fflush(stdin);

    for (i = 0; i <= n; i++) {
        e += 1.0 / factorial(i);
    }
    printf("���Ϸ��� ���� %lf�Դϴ�.\n", e);

    return 0;
}

long factorial(long x)
{
    int i;
    int result = 1;
    if (x < 0) {
        return LONG_MIN;
    }

    for (i = 1; i <= x; i++) {
        result *= i;
    }

    return result;
}
