#include "../libs/area-de-funcao.h"

double F(double x)
{
    return 2 * x;
}

int main(int argc, int **argv)
{
    double totalArea = 0, sectionArea = 0,
        bottomArea = 0, topArea = 0, A, B, n;
    
    printf("type in A, B and n\n");
    scanf("%lf %lf %lf", &A, &B, &n);

    double Dx = (B - A) / 2;
    int C = 1;

    do
    {
        bottomArea = F(A + Dx * (C - 1));
        topArea = ( F(A + Dx * C) - bottomArea ) / 2;
        totalArea = totalArea + bottomArea + topArea;
        C++;
    }while(C <= n);

    printf("The total area of this section is: %f", totalArea);    
    
    return 0;
}