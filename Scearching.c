#include <Stdio.h>
int main()
{
    int i, found = 0, num;
    num = 11;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {

        if (num == array[i])
        {
            found = 1;
            break;
        }
    }
if (found==1)
{
    printf("The number is in the array list ");
}
else
{
     printf("The number is not in the array list ");
   
}

    return 0;
}


