#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main() {
    float a;
    scanf("%f",&a);
    a*=PI/180;
    printf("z1=%f, z2=%f\n",(cos(2*a)+sin(5*a)-sin(3*a))/(cos(a+1)-2*sin(2*a)*sin(2*a)),2*sin(a));
    getchar();
    getchar();
    return 0;
}