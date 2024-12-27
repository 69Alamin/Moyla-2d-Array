#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    scanf("%d", &m);

    int Array[m][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &Array[i][j]);
        }
    }

    int sum = 0;

    for (int j = 0; j < m; j++) {
        sum += Array[0][j];
    }

    for (int j = 0; j < m; j++) {
        sum += Array[m - 1][j];
    }

    for (int i = 1; i < m - 1; i++) {
        sum += Array[i][i];
    }

    for (int i = 1; i < m - 1; i++) {
        sum += Array[i][m - i - 1];
    }

    if (m % 2 == 1) {
        sum += Array[m / 2][m / 2];
    }

    printf("%d\n", sum);
    return 0;
}
