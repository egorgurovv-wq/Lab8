#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int N, i;
    double sumCos = 0, sumSin = 0, res;
    printf("Введите значение N:\n");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        sumCos += cos(i);
        sumSin += sin(i);
    }
    res = sumCos / sumSin;
    printf("Результат: %.2lf\n", res);
}