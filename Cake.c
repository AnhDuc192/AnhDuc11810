#include <stdio.h>
int n;
int m;
int sum = 0;
int trace[40];
int a[40];
int maxS = 0;
void try(int i, int n, int m)
{
   for (int j = 0; j <= 1; j++)
   {
      sum += a[i] * j;
      trace[i] = j;
      if (i == n - 1)
      {
         if (sum <= m  && sum > maxS )
         {  
            maxS = sum;
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