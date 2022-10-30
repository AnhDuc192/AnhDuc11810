#include<stdio.h>
#include<conio.h>

int Fibonaci( int n){
    if (n == 1 || n==2) {
        return 1;}
  else{ return Fibonaci(n-1) + Fibonaci (n-2);
}
}
int main(){
    int n;
    printf("nhap n: ");scanf("%d",&n);
    int k = Fibonaci(n);
    printf("so fibonaci thu %d la: %d",n,k);
    getch();
    return 0;
}