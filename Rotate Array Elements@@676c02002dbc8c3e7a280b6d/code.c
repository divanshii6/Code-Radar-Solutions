// Your code here...
#include<stdio.h>
void reverse(int a[],int si,int ei){
    int i,j;
    for (i=si,j=ei;i<j;i++,j--){
        int temp =a[i];
        a[i]=a[j];
        a[j]=temp;

    }
    return ;
}
int main(){
    int i,j,k,n;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }
    scanf("%d",&k);
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
     for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}