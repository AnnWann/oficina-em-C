#include "../libs/binary-search.h"

#define ERROR 0.001

double F(double x) { return 3 * x + 5; }

bool isInside(double value) {
if (value < 0)
    return true;
else
    return false;
}

void findRoot(double *A, double *B) {

double n = 0;

do {

    n = (*B + *A) / 2;

    if (isInside(F(*A) * F(n)))
    *B = n;

    else if (isInside(F(*B) * F(n)))
    *A = n;

    else {
    *A = *A * 10;
    *B = *B * 10;
    findRoot(A, B);
    break;
    }

} while (*B - *A > ERROR);
}

int main(int argc, char **argv) {
double A = -2, B = 2;

findRoot(&A, &B);

printf("The root of this function is equal to: %.3lf", (B + A) / 2);

return 0;
}