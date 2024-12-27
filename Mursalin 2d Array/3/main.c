#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Array[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {

            scanf("%d",&Array[i][j]);
        }

    }

    int determinant = Array[0][0] * (Array[1][1] * Array[2][2] - Array[1][2] * Array[2][1]) -
                      Array[0][1] * (Array[1][0] * Array[2][2] - Array[1][2] * Array[2][0]) +
                      Array[0][2] * (Array[1][0] * Array[2][1] - Array[1][1] * Array[2][0]);

    printf("%d",determinant);
    return 0;
}
