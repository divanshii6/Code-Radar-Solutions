#include <stdio.h>
int main() {
   int i,n,j;
   scanf("%d",&n);
   for(i=1;i<=10;i++){
     j=n*i;
     printf("%d x %d = %d\n",n,i,j);
   }
//    printf("\n");
    return 0;
}