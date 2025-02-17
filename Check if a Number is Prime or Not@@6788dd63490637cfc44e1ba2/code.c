// Your code here...
#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for (i=2;i<a/2;i++){
        if(a%i==0){
            printf("Not Prime");
            break;
        }
        else if(a/2==i){
            printf("Prime");
        }
        break;
    }
}