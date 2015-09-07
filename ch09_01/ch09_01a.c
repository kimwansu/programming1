#include <stdio.h>

int main()
{
    int a;
    int b;
    int result;

    char op;

    while (1) {
        printf("연산을 입력하시오: ");
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
        printf("연산 결과: %d\n\n", result);
    }
}

int add(int a, int b)
{
    static int count = 0;
    count++;
    printf("덧셈은 총 %d번 실행되었습니다.\n", count);
    
    return a + b;
}

int sub(int a, int b)
{
    static int count = 0;
    count++;
    printf("뺄셈은 총 %d번 실행되었습니다.\n", count);

    return a - b;
}

int mul(int a, int b)
{
    static int count = 0;
    count++;
    printf("곱셈은 총 %d번 실행되었습니다.\n", count);

    return a * b;
}

int div(int a, int b)
{
    if (b == 0) {
        printf("0으로 나눌 수 없습니다.\n");
        return -1;
    }

    static int count = 0;
    count++;
    printf("나눗셈은 총 %d번 실행되었습니다.\n", count);

    return (double)a / (double)b;
}