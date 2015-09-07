#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2);

int main()
{
    double x1, x2, y1, y2;
    double distance;

    printf("ù��° ���� ��ǥ�� �Է��Ͻÿ� (x, y): ");
    scanf("%lf %lf", &x1, &y1);
    getchar();

    printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ� (x, y): ");
    scanf("%lf %lf", &x2, &y2);
    getchar();

    distance = get_distance(x1, y1, x2, y2);
    printf("�� �� ������ �Ÿ��� %lf�Դϴ�.\n", distance);

    return 0;
}

double get_distance(double x1, double y1, double x2, double y2)
{
    double dist_x = pow(x1 - x2, 2);
    double dist_y = pow(y1 - y2, 2);
    return sqrt(dist_x + dist_y);
}
