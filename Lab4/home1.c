#include <stdio.h>
#include<stdbool.h>
int main()
{
    int a[100];
    int b[100];
    int n, m;
    int c[200];
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] =", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("b[%d] =", i);
        scanf("%d", &b[i]);
    }

    c[0] = a[0];

    int nextElement = 1;

    for (int i = 1; i < n; i++)
    {
        bool isDuplicate = false;
        for (int j = nextElement - 1; j >= 0; j--)
        {
            if (a[i] == c[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate)
        {
            c[nextElement] = a[i];
            nextElement++;
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        bool isDuplicate = false;
        for (int j = nextElement - 1; j >= 0; j--)
        {
            if (b[i] == c[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate)
        {
            c[nextElement] = b[i];
            nextElement++;
        }
    }

    for(int i = 0; i < nextElement; i++){
        printf("%d ",c[i]);
    }

    return 0;
}