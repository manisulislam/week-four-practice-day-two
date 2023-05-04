#include<stdio.h>
int count_odd(int ar[], int size){
    int count=0;
    for(int i=0; i<size; i++){
        if(ar[i]%2==1){
            count++;
            ar++;
        }
    }
    printf("%d",count);

}
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int result = count_odd(ar, n);
   
          
  return 0;
}
