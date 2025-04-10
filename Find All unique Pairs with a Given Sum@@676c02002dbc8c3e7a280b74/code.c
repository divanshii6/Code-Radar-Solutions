// #include<stdio.h>
// int main(){
//     int i,j,k,n,a1,b1,count=0;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
// }
// scanf("%d",&k);
// for(i=0;i<n;i++){
//   for(j=i+1;j<n;j++){
//     if(a[i]+a[j]==k){
//         a1=a[i];
//         b1=a[j];
//         printf("%d %d\n",a1,b1);
//         count++;
    
//     }
//   }
// }
// //  if(count==0){
// //  printf("-1");}
// }
#include<stdio.h>

int main() {
    int i, j, k, n;
    scanf("%d", &n);
    
    int a[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &k);
    
    // Sort the array first to handle duplicates
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    // Find unique pairs
    for(i = 0; i < n; i++) {
        // Skip duplicates in the outer loop
        if(i > 0 && a[i] == a[i-1]) continue;
        
        for(j = i + 1; j < n; j++) {
            // Skip duplicates in the inner loop
            if(j > i + 1 && a[j] == a[j-1]) continue;
            
            if(a[i] + a[j] == k) {
                printf("%d %d\n", a[i], a[j]);
            }
        }
    }
    
    return 0;
}