#include <stdio.h>
#include <stdbool.h>

int main() {
int a;
    printf("Podaj rok urodzenia");
scanf("%d", &a);

    int b;
    printf("Podaj swój wzrost");
    scanf("%d", &b);

    printf("Urodziłam się w %d roku, mam %d wzrostu", a, b);

    return 0;
}
