#include <stdio.h>
int main() {
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if(a>b){
    if(a>c){
        printf("%d",a);
    }
    else{
        if(c>b){
            printf("%d",c);
        }
        else{
            printf("%d",b);

        }
    }
   }
   else{
    printf("%d",b);
   }
    return 0;
}