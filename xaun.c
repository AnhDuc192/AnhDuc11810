// nhap n, xuat ra xau nhi phan co do dai n
#include<stdio.h>


int x[100];


void printSolution(int *x,int n ){
    for( int k = 0; k<n;k++){
        printf("%d",x[k]);
    } printf("\n");
}
int try(int *x,int n,int k){
   for( int v = 0; v<=1;v++){
    x[k] = v;
    if(k == n-1) printSolution(x,n);
    else try(x,n,k+1);
   }
}

int main(){
    int n;
    scanf("%d",&n);
    try(x,n,0);
}