#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main()
{
    int human;
    int computer;

    char c = 'y';

    srand(time(NULL));
    while (c != 'n') {
        computer = b_rand();
        printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
        scanf("%d", &human);
        getchar();
        
        if (human == computer) {
            printf("�¾ҽ��ϴ�.\n");
        }
        else {
            printf("Ʋ�Ƚ��ϴ�.\n");
        }

        printf("����Ͻðڽ��ϱ�?(y �Ǵ� n): ");
        scanf("%c", &c);
        getchar();
    }
    
    return 0;
}

int b_rand()
{
    return rand() % 2;
}