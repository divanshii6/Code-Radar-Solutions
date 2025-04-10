#include<stdio.h>
int main(){
    int i,j,k,n,a1,b1,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
    if(a[i]+a[j]==k){
        a1=a[i];
        b1=a[j];
        printf("%d %d\n",a1,b1);
        count++;
    
    }
  }
}
 if(count==0){
 printf("-1");}
}