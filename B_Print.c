#include<stdio.h>

void printing(int ar[], int size){
    for(int i=1; i<=size;i++){
        printf("%d ",i);
    }
    return;

}
int main(){
    int n;
    scanf("%d ",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&ar[i]);
    }
    printing(ar,n);
    
          
  return 0;
}
