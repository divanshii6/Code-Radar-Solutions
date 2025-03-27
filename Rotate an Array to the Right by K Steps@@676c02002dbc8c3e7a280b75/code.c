// Your code here...
#include<stdio.h>
void reverse(int a[],int si,ei){
 for(int i=si,int j=ei;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    k=k%n;
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}