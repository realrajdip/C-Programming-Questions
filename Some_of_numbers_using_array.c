#include <Stdio.h>
int main()
{

    int num[5], sum = 0;

    // input

    printf("Enter the numbers : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    // output

    
    for (int i = 0; i < 5; i++)
    {
      sum = sum+num[i];

    }
    printf("Sum of the digits is : %d", sum);
    return 0;
}