#include <stdio.h>
int main() {
   int cp,sp;
   scanf("%d %d",&cp,&sp);
   if(cp<sp){
    printf("Profit");
   }
   else if(sp>cp){
    printf("Loss");
   }
   else if (cp==sp){
    printf("No Profit No Loss");
   }
    return 0;
}