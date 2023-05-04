#include<stdio.h>

int my_abs(int n){
    if(n<0){
        int result= n*(-1);
        printf("%d", result);
    }
    else{
        printf("%d", n);

    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    my_abs(n);
  return 0;
}
