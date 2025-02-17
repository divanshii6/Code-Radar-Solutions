// Your code here...
#include<stdio.h>
int main(){
  int a,i,n,d1,bit;
  scanf("%d %d",&n,&bit);
  a=(n>>bit)&1;
  printf("%d",a);
}