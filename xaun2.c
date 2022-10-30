//  sinh chuỗi nhị phân mở rộng sao cho không có 2 bit 1 đứng cạnh nhau
#include<stdio.h>


int x[100];


void printSolution(int *x,int n ){
    for( int k = 0; k<n;k++){
        printf("%d",x[k]);
    } printf("\n");
}
int try(int *x,int n,int k){
   for( int v = 0; v<=1;v++){
    if(k>0&&v+x[k-1] == 2) continue;
    x[k] = v;
    if(k == n-1) 
    printSolution(x,n);
    else try(x,n,k+1);
   }
}

int main(){
    int n;
    scanf("%d",&n);
    try(x,n,0);
}

