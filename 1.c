#include <stdio.h>
int sum_of_digits(int n,int sum){
    if (n==0)
    {
        return sum;
    }
      sum = sum + (n%10);
       return sum_of_digits(n/10,sum);
};
int main(){
    int num = 1234;
    int ans = sum_of_digits(num,0);
    printf("%d",ans);
    return 0;
}