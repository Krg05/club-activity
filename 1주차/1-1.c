#include <stdio.h>
#define SIZE 100
#pragma warning(disable: 4996)

int main(void) {
    int N, v, count = 0;
    scanf("%d", &N);

    int number[SIZE];

    for (int i = 0; i < N; i++) {
        scanf("%d", &number[i]);
    }

    scanf("%d", &v);

    for (int i = 0; i < N; i++) {
        if (number[i] == v) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}