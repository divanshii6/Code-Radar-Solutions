
#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int inc=1,dec=1;
    for(i=0;i<n-1;i++){
        if((a[i]<a[i+1])){
           dec=0;
        }
        if((a[i]>a[i+1])){
            inc=0;
        }
    }
    if(inc||dec){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
