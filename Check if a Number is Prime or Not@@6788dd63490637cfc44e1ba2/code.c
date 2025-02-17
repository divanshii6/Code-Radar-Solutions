// Your code here...
#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    // if(a%2!=0&&a%3!=0&&a%5!=0&&a%6!=0&&a%7!=0){
    //     printf("Prime");
    // }
    // else{
    //     printf("Not Prime");
    // }
    for (i=2;i<=a;i++){
        if(a%i==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
}