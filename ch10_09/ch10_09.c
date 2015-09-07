#include <stdio.h>
#include <time.h>

int results[10][3];

int main()
{
    srand(time(NULL));
    init_results();
    calc_results();

    return 0;
}

void init_results()
{
    int i;
    int j;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            results[i][j] = rand() % 101;
        }
    }
}

void calc_results()
{

}