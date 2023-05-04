#include<stdio.h>
int my_len(char *ar){
    int result = 0;
    while(*ar!='\0'){
        result++;
        ar++;
    }
    return result;

}
int main(){
    char ar[100];
    scanf("%s", &ar);
    int string_length = my_len(ar);
    printf("%d", string_length);
          
  return 0;
}
