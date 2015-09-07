#include <stdio.h>

int get_tri_number(int n);

int main()
{
    int tri_number;
    int i;
    
    for (i = 1; i <= 10; i++) {
        tri_number = get_tri_number(i);
        printf("%d: %d\n", i, tri_number);
    }
}

int get_tri_number(int n)
{
    if (n == 1) {
        return 1;
    }

    return n + get_tri_number(n - 1);
}