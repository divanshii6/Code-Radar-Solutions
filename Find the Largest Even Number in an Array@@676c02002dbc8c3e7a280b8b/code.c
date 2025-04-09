// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    int a[n],idx=0,b[idx];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            b[idx]=a[i];
            idx++;
        }
        else{
            printf("-1");
            break;
        }
    }
    for(i=0;i<idx;i++){
        for(j=0;j<n-idx-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%d",b[idx-1]);
}