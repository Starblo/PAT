#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double r1, p1, r2, p2;
    double x, y;
    
    cin >> r1 >> p1 >> r2 >> p2;
    x = r1 * r2 * (cos(p1) * cos(p2) - sin(p1) * sin(p2));
    y = r1 * r2 * (sin(p1) * cos(p2) + sin(p2) * cos(p1));
    
    if (x < 0 && x > -0.01)
        printf("0.00");
    else
        printf("%.2f", x);
    if (y < 0 && y > -0.01)
        printf("+0.00i");
    else if (y < 0)
        printf("%.2fi", y);
    else
        printf("+%.2fi", y);
    return 0;
}
