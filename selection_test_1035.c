#include <stdio.h>
int main()
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if (B > C && D > A)
    {
        if (C > 0 && D > 0)
        {
            if (A % 2 == 0)
            {
                if ((C + D) > (A + B))
                {
                    printf("Valores aceitos\n");
                }
            }
        }
    }
    else
        printf("Valores nao aceitos\n");
}