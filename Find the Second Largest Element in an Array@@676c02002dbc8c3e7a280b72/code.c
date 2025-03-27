// // Your code here...
// #include<stdio.h>
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int max=a[0];
//     int smax=a[0];
//     for(i=0;i<n;i++){
//         if(max<a[i]){
//            int smax=max;
//            int max=a[i];
//         }
//         else if(smax<a[i] && max!=a[i]){
//             smax=a[i];
//         }
//     }
//     printf("%d",smax);
// }
#include<stdio.h>
int main(){
   int i, j, k,max,smax;
   int a[6]={1,2,3,4,4,2};
   max=a[0];
   smax=a[0];
 for(i=0;i<=5;i++){
    if (max<a[i]){
        smax=max;
        max=a[i];
    }
    else if(smax=a[i] && max!=a[i]){
        smax=a[i];
    }
 }
 printf("%d",smax);
   return 0;
}