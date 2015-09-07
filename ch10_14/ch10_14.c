#include <stdio.h>
#include <time.h>

int select_dir();
int check_explored();

int tile[20][20] = { 0 };

int main()
{
    int move;
    int dir;

    int x = 10;
    int y = 10;
    tile[x][y] = 1;
    
    srand(time(NULL));

    for (move = 0; move < 100000; move++) {
        dir = select_dir();
        if ((dir >= 1 && dir <= 3) && x < 19) {
            x++;
        }
        else if ((dir >= 5 && dir <= 7) && x > 0) {
            x--;
        }

        if ((dir == 0 || dir == 1 || dir == 7) && y > 0) {
            y--;
        }
        else if ((dir >= 3 && dir <= 5) && y < 19) {
            y++;
        }

        tile[x][y] = 1;

        if (check_explored() == 1) {
            break;
        }
    }
    
    printf("%d\n", move);
}

int select_dir()
{
    return rand() % 8;
}

int check_explored()
{
    int i;
    int j;

    for (i = 0; i < 19; i++) {
        for (j = 0; j < 19; j++) {
            if (tile[i][j] == 0) {
                return 0;
            }
        }
    }

    return 1;
}