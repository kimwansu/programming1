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
        printf("앞면 또는 뒷면(1 또는 0): ");
        scanf("%d", &human);
        getchar();
        
        if (human == computer) {
            printf("맞았습니다.\n");
        }
        else {
            printf("틀렸습니다.\n");
        }

        printf("계속하시겠습니까?(y 또는 n): ");
        scanf("%c", &c);
        getchar();
    }
    
    return 0;
}

int b_rand()
{
    return rand() % 2;
}