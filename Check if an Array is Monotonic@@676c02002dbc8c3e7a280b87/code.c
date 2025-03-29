
// #include<stdio.h>
// int main(){
//     int i,j,k,n,ans=0;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<=n-1;i++){
//         if((a[i]<=a[i+1])||(a[i]>=a[i+1])){
//             ans=1;
//         }
//     }
//     if(ans==1){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
// }
#include<stdio.h>
int main(){
    int i, n, ans=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    // Check if the array is monotonic (all increasing or all decreasing)
    int increasing = 1, decreasing = 1;
    
    for(i=0; i<n-1; i++){
        if(a[i] > a[i+1]) increasing = 0;
        if(a[i] < a[i+1]) decreasing = 0;
    }
    
    if(increasing || decreasing){
        printf("YES");
    } else{
        printf("NO");
    }
    
    return 0;
}