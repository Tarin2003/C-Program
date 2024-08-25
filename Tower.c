#include<stdio.h>
struct distance
{
    int feet;
    float inch;
};
struct complex
{
    float real;
    float imag;
};
int main()
{
    struct distance d1={23,8.6};
    struct distance d2={34,2.5};
    printf("%d' - %.1f''\n",(d1.feet+d2.feet),(d1.inch+d2.inch));
    struct complex r1={2.1,-2.3};
    struct complex r2={5.6,23.2};
    printf("%.1f + %.1fi",(r1.real+r2.real),(r1.imag+r2.imag));


    return 0;
}
