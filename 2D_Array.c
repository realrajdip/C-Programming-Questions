#include <Stdio.h>
int main()
{

    int array[2][2]; // 2D matrix // row X column

    printf("\nEnter Values :");

    for (int i = 0; i < 2; i++)
    {                                            // rows
        for (int j = 0; j < 2; j++)
        {                                        // column

            scanf("%d", &array[i][j]);
        }
    }

    printf("The Matrix is:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}