#include <stdio.h>

int main()
{
    int binary[32];
    int i;
    int n;

    printf("2������ ��ȯ�� ���ڸ� �Է��Ͻÿ�: ");
    scanf("%d", &n);

    for (i = 0; i < 32 && n > 0; i++) {
        binary[i] = n % 2;
        n /= 2;
    }

    for (--i; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
