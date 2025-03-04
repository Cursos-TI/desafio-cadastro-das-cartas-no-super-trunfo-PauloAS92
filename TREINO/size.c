#include <stdio.h>

int main (){
    printf("tamanho de int: %zu bytes\n", sizeof(int));
    printf("tamanho de long int: %zu bytes\n", sizeof(long int));
    printf("tamanho de long long int: %zu bytes\n", sizeof(long long int));
    printf("tamanho de double: %zu bytes\n", sizeof(double));
    printf("tamanho de long double: %zu bytes\n", sizeof(long double));
    printf("tamanho de unsigned long int: %zu bytes\n", sizeof(unsigned long int));
    return 0;
}