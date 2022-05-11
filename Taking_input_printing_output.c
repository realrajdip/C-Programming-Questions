#include <Stdio.h>
int main()
{

    int marks[5];

    // input

    printf("Enter the marks :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    // output

    printf("Marks are :");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", marks[i]);
    }

    return 0;
}