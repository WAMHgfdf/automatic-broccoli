#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i, j, a, b;
    //scanf("%d %d",&i,&j);
    //int arr[i][j]={0};
    int arr[10][10] = { 0 };
    for (a = 0; a <= i - 1; a++)
    {
        for (b = 0; b <= j - 1; b++)
        {
            scanf("%d ", &arr[a][b]);
        }
    }
    for (b = 0; b <= j - 1; b++)
    {
        for (a = 0; a <= i - 1; a++)
        {
            printf("%d ", arr[b][a]);
        }
        printf("\n");
    }

    return 0;
}