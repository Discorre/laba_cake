#include <stdio.h>
#include <math.h>

double cos_taylor(double x, int n) {
    double result = 1.0;
    double term = 1.0;
    int sign = -1;

    for (int i = 2; i <= n; i += 2) {
        term *= x * x / ((i - 1) * i);
        result += sign * term;
        sign *= -1;
    }

    return result;
}

int main() {
    double x = 3.14 / 4;  // ������ �������� x
    int n = 10;  // ������ ���������� ������ ����

    printf("cos(%f) = %.10f\n", x, cos_taylor(x, n));

    return 0;
}
