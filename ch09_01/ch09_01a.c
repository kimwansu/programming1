#include <stdio.h>

int main()
{
    int a;
    int b;
    int result;

    char op;

    while (1) {
        printf("������ �Է��Ͻÿ�: ");
        scanf("%d %c %d", &a, &op, &b);

        switch (op) {
        case '+':
            result = add(a, b);
            break;
        case '-':
            result = sub(a, b);
            break;
        case '*':
            result = mul(a, b);
            break;
        case '/':
            result = div(a, b);
            break;
        default:
            return 0;
        }
        printf("���� ���: %d\n\n", result);
    }
}

int add(int a, int b)
{
    static int count = 0;
    count++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
    
    return a + b;
}

int sub(int a, int b)
{
    static int count = 0;
    count++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);

    return a - b;
}

int mul(int a, int b)
{
    static int count = 0;
    count++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);

    return a * b;
}

int div(int a, int b)
{
    if (b == 0) {
        printf("0���� ���� �� �����ϴ�.\n");
        return -1;
    }

    static int count = 0;
    count++;
    printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);

    return (double)a / (double)b;
}