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
    printf("1. 햄버거\n");
    printf("2. 치즈버거\n");
    printf("3. 샌드위치\n");
    printf("4. 종료\n");

    printf("원하는 메뉴를 선택하시오: ");
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
    printf("%d번 메뉴가 실행되었습니다.\n", n);
}
