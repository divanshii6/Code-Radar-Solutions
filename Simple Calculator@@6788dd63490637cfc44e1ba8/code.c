#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    switch(c){
        case '+':
            printf("%f",a+b);
            break;
        case '-':
            printf("%f",a-b);
            break;
        case '*':
            printf("%f",a*b);
            break;
        case '/':
            if(b==0){
                printf("error\n");
            }
            else{
                printf("%.0f\n",(float)a/b);
            }
        break;
        default:
            printf("error");
            break;
    }
            return 0;
}

    return 0;
}