#include <Stdio.h>
int main()
{
    int num[5],temp;

    printf("Enter the array elements :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\nThe elements are:");
    for (int i = 0; i < 5; i++)
    {
        printf("\t%d",num[i]);
    }


for (int i = 0; i < 4; i++)
{
    for (int j = i+1; j < 5; j++)
    {
        if (num[i]>num[j])
        {
            temp = num[i];
            num[i]=num[j];
            num[j]=temp;

        }
        
    }
    
}
printf("\nsorted array is :");
for(int i=0; i<5; i++ ){
printf("\t%d",num[i]);
}

    return 0;
}