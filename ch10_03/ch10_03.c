#include <stdio.h>

int array_equal(int a[], int b[], int size);

int main()
{
    int aaa[] = { 1, 4, 3, 0, 8, 10, 48, 31 };
    int bbb[] = { 1, 4, 3, 1000, 8, 10, 48, 31 };
    int cmp_result = array_equal(aaa, bbb, 8);

    if (cmp_result) {
        printf("�� �迭�� ���Ҵ� ����.\n");
    }
    else {
        printf("�� �迭�� ���Ҵ� �ٸ���.\n");
    }
    return 0;
}

int array_equal(int a[], int b[], int size)
{
    int i;
    
    for (i = 0; i < size; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}
