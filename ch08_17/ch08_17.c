#include <stdio.h>
#include <stdlib.h>

void print_menu();
int check_menu_number(int n);
void run_menu(int n);

int main()
{
    int choice = 0;

    while (choice != 4) {
        print_menu();
        scanf("%d", &choice);
        fflush(stdin);
        if (check_menu_number(choice)) {
            continue;
        }
        run_menu(choice);
    }

    return 0;
}

void print_menu()
{
    printf("1. �ܹ���\n");
    printf("2. ġ�����\n");
    printf("3. ������ġ\n");
    printf("4. ����\n");

    printf("���ϴ� �޴��� �����Ͻÿ�: ");
}

int check_menu_number(int n)
{
    if (n < 1 || n > 4) {
        return 1;
    }
    else {
        return 0;
    }
}

void run_menu(int n)
{
    printf("%d�� �޴��� ����Ǿ����ϴ�.\n", n);
}
