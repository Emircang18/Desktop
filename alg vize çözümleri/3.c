#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
    int i, n, t1 = 1, t2 = 1, nextTerm;

    printf("Terim sayýsýný girin: ");
    scanf("%d", &n);

    printf("Fibonacci Dizisi : ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
