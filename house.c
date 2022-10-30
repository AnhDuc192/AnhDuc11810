/* Một công ty đầu tư xây dựng một khu nhà gồm L căn nhà nằm cạnh nhau trên một con đường. Có N người muốn mua 
nhà ở khu nhà này, biết rằng người thứ i muốn mua ai căn nhà và mỗi người đều muốn mua những căn nhà nằm 
cạnh nhau. Do số căn nhà cần mua có thể nhỏ hơn tổng số căn nhà (L) nên sẽ có một số căn nhà chưa được bán.
 Để đảm bảo mỹ quan của khu nhà, công ty sẽ luôn luôn bán căn nhà đầu tiên (theo thứ tự từ trái sang phải). Biết yêu cầu của những người mua, một cách bán những căn nhà của công ty có thể được biểu diễn bằng 1 dãy gồm L số. Trong đó số thứ i bằng 0 nếu căn nhà thứ i
 chưa được bán và bằng k nếu căn nhà thứ i được bán cho người thứ k.
Ví dụ: khi L=4, N=2, a1 = 2, a2=1, dãy “2 0 1 1” thể hiện một cách bán những căn nhà của công ty: căn nhà đầu tiên bán cho người thứ 2, căn nhà thứ 3 và thứ 4 bán cho người đầu tiên và căn nhà thứ 2 được để lại.
*/
#include <stdio.h>
int sokq = 0;
void TRY(int *a, int n, int m, int *x, int k, int *d)
{
    if (k == m)
    {
        for (int i = 1; i <= m; i++)
            if (x[i] == 0)
                printf("0 ");
            else
                for (int j = 1; j <= a[x[i]]; j++)
                    printf("%d ", x[i]);
        printf("\n");
        sokq++;
        return;
    }
    if (sokq == 1000)
        return;
    for (int t = k == 0 ? 1 : 0; t <= n; t++)
        if (d[t])
        {
            x[k + 1] = t;
            d[t]--; // tien
            TRY(a, n, m, x, k + 1, d);
            d[t]++; // lui
        }
}
int main()
{
    int L, n, B, d[105], a[105], x[105];
    scanf("%d%d", &L, &n);
    B = L;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        B -= a[i];
    }
    for (int i = 1; i <= n; i++)
        d[i] = 1;
    d[0] = B;
    TRY(a, n, n + B, x, 0, d);
}