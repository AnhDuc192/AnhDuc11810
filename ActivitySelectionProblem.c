/*Một nhà máy đang có nn công việc cần hoàn thành, công việc thứ i phải bắt đầu tại thời điểm a_i​ và kết thúc
 tại thời điểm b_i. Tuy nhiên, do nhân lực có hạn nên nhà máy đó không thể thực hiện nhiều công việc một lúc,
 mà chỉ có thể thực hiện một công việc tại một thời điểm.  Hãy tìm cách lựa chọn các công việc mà nhà máy sẽ làm
 sao cho số công việc được hoàn thành là nhiều nhất có thể ?

  Input :
  Dòng đầu tiên chứa số nguyên dương nn - số lượng công việc(1≤n≤10^6),n dòng tiếp theo,
  dòng thứ i chứa hai số nguyên a_i, b_i là thời điểm bắt đầu và thời điểm kết thúc của
   công việc thứ  i
  Output :
  Đưa ra một số nguyên duy nhất là số lượng công việc tối đa có thể hoàn thành.
  Sample input :   6
                   0 6
                   5 7
                   3 4
                   8 9
                   5 9
                   1 2
  Sample output : 4  ( 6 -> 3 -> 2 -> 4) */
  
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// hàm so sánh 
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void solution(int a[], int b[], int n)
{
    qsort(b, n, sizeof(int), cmpfunc);
    int res = 1;
    int last_index = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] >= b[last_index])
        {
            last_index = i;
            ++res;
        }
    }
    printf("%d", res);
}
int main()
{
    int n;
    printf("nhap n: \n");
    scanf("%d", &n);
    int a[n];
    int b[n];
    printf("nhap a: \n");
    for (int i = 1; i < n ; i++)
    {
        scanf("%d  ", &a[i]);
    }
    printf("nhap b: \n");
    for (int i = 1; i < n + 1; i++)
    {
        scanf("%d  ", &b[i]);
    }
    solution(a, b, n);
}
