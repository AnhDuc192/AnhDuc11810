/*
  alibaba lọt vào hang động có n vật bằng vàng( n<=30 ); được ghi sẵn khối lượng lên từng vật,
  Sức Alibaba chỉ  mang được khối lượng tối đa là m; hãy giúp alibaba ghi ra danh sách các vật sao
  cho tổng khối lượng bằng đúng m;
    intput: dòng đầu là 2 số n,m;
            dòng thứ hai là: n số nguyên dương;
    output : nhiều dòng, mỗi dòng ghi khối lượng các vật phù hợp.
    VD: input 5,12
              2,5,7,9,3
        output: 9,3
                5,7
                2,7,3
  */
#include <stdio.h>
int n;
int m;
int sum = 0;
int trace[200];
int a[100];

void try(int i, int n, int m)
{
   for (int j = 0; j <= 1; j++)
   {
      sum += a[i] * j;
      trace[i] = j;
      if (i == n - 1)
      {
         if (sum == m)
         {
            for (int k = 0; k < n; k++)
            {
               if (trace[k] == 1)
                  printf("%d ", a[k]);
            }
            printf("\n");
         }
      }
      else
         try(i + 1, n, m);
      trace[i] = 0;
      sum -= a[i] * j;
   }
}

int main()
{
   int m;
   printf("nhap n: ");
   scanf("%d", &n);
   printf("nhap m: ");
   scanf("%d", &m);
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   for (int i = 0; i < n; i++)
   {
      trace[i] = 1;
   }
   try(0, n, m);
}