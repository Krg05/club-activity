#include <stdio.h>
#pragma warning(disable: 4996)

void First() {
    int max_value = 0;
    int max_index = 0;
    int num;
    int i;

    for (i = 1; i <= 9; i++) {
        scanf("%d", &num);

        if (num > max_value) {
            max_value = num;
            max_index = i;
        }
    }

    printf("%d\n", max_value);
    printf("%d\n", max_index);
}

void Second() {
    int n;
    int a = 0, b = 1, temp;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0��° �Ǻ���ġ ��: 0\n");
        return 0;
    }

    if (n == 1) {
        printf("1��° �Ǻ���ġ ��: 1\n");
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("%d��° �Ǻ���ġ ��: %d\n", n, b);
}

void Third() {
    int arr[9][9];
    int max = 0;
    int row = 0, col = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);

            if (arr[i][j] > max) {
                max = arr[i][j];
                row = i + 1;
                col = j + 1;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d\n", row, col);
}

int main(void) {
    int select;
    while (1) {
        scanf("%d", &select);

        switch (select) {
        case 1:
            First();
            break;
        case 2:
            Second();
            break;
        case 3:
            Third();
            break;
        default:
            printf("�߸��� �����Դϴ�. �ٽ� �õ��ϼ���.\n");
            continue;
        }
        break;
    }
    return 0;
}