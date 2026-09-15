#include <stdio.h>

int main() {
    long long n, result = 0, place = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n != 0) {
        rem = n % 10;

        if (rem == 0)
            rem = 1;
        else
            rem = 0;

        result = result + rem * place;
        place = place * 10;
        n = n / 10;
    }

    printf("1's complement = %lld", result);

    return 0;
}