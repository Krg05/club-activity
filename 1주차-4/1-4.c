#include <stdio.h>
#pragma warning(disable: 4996)

void Decision(int n) {
    if (n % 2 == 0) {
        printf("¦���Դϴ�.\n");
    }
    else {
        printf("Ȧ���Դϴ�.\n");
    }
}

int main() {
    int n;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    Decision(n);
    return 0;
}