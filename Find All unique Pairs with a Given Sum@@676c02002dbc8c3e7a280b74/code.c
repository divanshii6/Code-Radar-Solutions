#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
    if(a[i]+a[j]==k){
        a=a[i];
        b=a[j];
    }
  }
}
printf("%d %d",a,b);
}