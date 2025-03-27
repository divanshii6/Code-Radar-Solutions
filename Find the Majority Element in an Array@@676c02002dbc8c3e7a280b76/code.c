// // Your code here...
// #include<stdio.h>
// int main(){
//     int i,j,n,check=0;check1=-1;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d ",&a[i]);
//     }
//     for(i=0;i<n;i++){
//         int result=1;
//         for(j=1;j<n;j++){
//             if(a[i]==a[j] && a[i]!=a[j]){
//                result++
            
//             } 
//             if(result>check){
//                 result=a[i];
//             } 
//         }
        
//     }
//     if(check>(n/2)){
//         printf("%d",c);
//     }
//     else{
//         printf("%d",check1);
//     }
// }
#include<stdio.h>

int main() {
    int i, j, n, max_count = 0, result = -1;
    scanf("%d", &n);
    int a[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);  // Removed extra space
    }
    
    for (i = 0; i < n; i++) {
        int current_count = 1;
        for (j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                current_count++;
            }
        }
        
        if (current_count > max_count) {
            max_count = current_count;
            result = a[i];
        }
    }
    
    if (max_count > n/2) {
        printf("%d", result);
    }
    else {
        printf("-1");
    }
    
    return 0;
}