#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter Three Integers : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n1 > n3){
        printf("%d is the biggest among 3 numbers",n1);
    } else if (n2>n1 && n2 > n3){
        printf("%d is the biggest among 3 numbers",n2);
    } else {
        printf("%d is the biggest among 3 numbers",n3);
    }
    return 0;
}