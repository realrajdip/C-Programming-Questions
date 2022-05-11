// one element from a one from b
#include<Stdio.h>
int main(){
int a[2]={1,2};
int b[2]={3,4};
int c[4];
for(int i=0,j=0; i<4;i=i+2,j++)
{
      c[i]= a[j];
      c[i+1]= b[j]; 
}
printf("Merged array: ");
for( int i=0; i<4;i++){
    printf("\t%d",c[i]);
}

return 0;
}