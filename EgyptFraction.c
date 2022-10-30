/*Mỗi phân số dương đều có thể được biểu diễn dưới dạng tổng của các phân số đơn vị khác nhau (phân số đơn vị
 là phân số có tử số bằng 1, và mẫu số là một số nguyên dương). Cách biểu diễn phân số như vậy được gọi là 
 biểu diễn theo Phân số Ai Cập, và mỗi phân số có rất nhiều cách biểu diễn như vậy. Cho trước một phân số 
 a/b, hãy tìm biểu diễn phân số Ai Cập của nó với số lượng số hạng là ít nhất có thể?
   Input:
      Một dòng duy nhất chứa hai số nguyên dương a, b  (1 <= a < b <= 1000)
   Output:
       In ra các phân số trong phân tích tìm được, mỗi phân số trên một dòng theo thứ tự
        giảm dần về giá trị.   

    Sample Input:  6 14    
    ample Output:  1 3
                   1 11
                   1 231 */

          // Sử dụng thuật toán tham lam (Greedy algorithm)         
    #include<stdio.h>               

    void egyptian_representation(int a, int b){
       // nếu a = b = 0 thì return ;
       if( a==0 && b == 0) return ;

       if ( b%a == 0) {
        int d = b/a;
        printf("1/%d ",d);
        return;
       }
       // tìm phân số đơn vị lớn nhất không vượt quá a / b
       int x = b/a + 1;
       printf("1/%d \n",x);
       // tiếp tục phân tích hiệu a/b - 1/x;
       egyptian_representation(a*x-b,b*x);
    }

    int main(){
        int a,b;
        scanf("%d %d",&a,&b);
        egyptian_representation(a,b);
    }


    