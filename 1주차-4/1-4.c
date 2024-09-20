#include <stdio.h>
#pragma warning(disable: 4996)

void Decision(int n) {
    if (n % 2 == 0) {
        printf("짝수입니다.\n");
    }
    else {
        printf("홀수입니다.\n");
    }
}

int main() {
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    Decision(n);
    return 0;
}