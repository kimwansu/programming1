#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2);

int main()
{
    double x1, x2, y1, y2;
    double distance;

    printf("첫번째 점의 좌표를 입력하시오 (x, y): ");
    scanf("%lf %lf", &x1, &y1);
    getchar();

    printf("두번째 점의 좌표를 입력하시오 (x, y): ");
    scanf("%lf %lf", &x2, &y2);
    getchar();

    distance = get_distance(x1, y1, x2, y2);
    printf("두 점 사이의 거리는 %lf입니다.\n", distance);

    return 0;
}

double get_distance(double x1, double y1, double x2, double y2)
{
    double dist_x = pow(x1 - x2, 2);
    double dist_y = pow(y1 - y2, 2);
    return sqrt(dist_x + dist_y);
}
