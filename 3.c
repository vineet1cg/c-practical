#include <stdio.h>
int main(){
    int n;
    int sum = 0;
    do
    {
        scanf("%d",&n);
        sum = sum + n;
    } while (n!=0);
    printf("%d is the sum of previously entered number",sum);
    return 0;
}