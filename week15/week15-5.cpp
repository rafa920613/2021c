#include <stdio.h>

///�o��box�|�⵪�׺�X��

int box(int a, int b)

{   ///  �Ѥj   �ѤG

    int ans;

    if(a==0){

      ans=b;

      return ans;

    }

    if(b==0){

      ans=a;

      return ans;

    }

    ans = box( b, a%b );

    return ans;

} ///   �A�� �s�Ѥj �s�ѤG

int main()

{

    int a=987654321, b=123456789;

    //scanf("%d %d", &a, &b);���nŪ

    int ans = box(a,b);

    printf("%d", ans);

}
