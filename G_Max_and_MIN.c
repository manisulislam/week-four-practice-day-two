#include<stdio.h>
void minAndMax(int ar[], int size){
    int max=ar[0], min=ar[0];
    for(int i=0; i<size; i++){
        if(ar[i]<min){
            min=ar[i];
        }
        if(ar[i]>max){
            max=ar[i];
        }
        
    }
    printf("%d %d", min, max);

}
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n;i++){
        scanf("%d", &ar[i]);
    }
    minAndMax(ar,n);
          
  return 0;
}
