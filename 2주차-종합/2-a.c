#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

void First() {
    char S[1001];
    int i;

    scanf("%s", S);
    scanf("%d", &i);

    printf("%c\n", S[i - 1]);
}

void Second() {
    char A[4], B[4];
    scanf("%s %s", A, B);

    int revA = (A[2] - '0') * 100 + (A[1] - '0') * 10 + (A[0] - '0');
    int revB = (B[2] - '0') * 100 + (B[1] - '0') * 10 + (B[0] - '0');

    if (revA > revB) {
        printf("%d\n", revA);
    }
    else {
        printf("%d\n", revB);
    }
}

void Third() {
    char S[101];
    int position[26];

    for (int i = 0; i < 26; i++) {
        position[i] = -1;
    }

    scanf("%s", S);
    int length = strlen(S);

    for (int i = 0; i < length; i++) {
        int index = S[i] - 'a';
        if (position[index] == -1) {
            position[index] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", position[i]);
    }
    printf("\n");
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
            printf("잘못된 선택입니다. 다시 시도하세요.\n");
            continue;
        }
        break;
    }
    return 0;
}