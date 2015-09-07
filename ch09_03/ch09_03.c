#include <stdio.h>
#include <time.h>

int get_random();

int main()
{
    int i;
    for (int i = 0; i < 10; i++) {
        printf("%d\n", get_random());
    }

    return 0;
}

int get_random()
{
    static int inited = 0;
    if (inited == 0) {
        srand(time(NULL));
        inited = 1;
    }
    return rand();
}