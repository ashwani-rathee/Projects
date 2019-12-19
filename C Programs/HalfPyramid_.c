//author:ashwani rathee
//date:19/12/19
//topic:making half pyramid

#include <stdio.h>

int main()
{
    int i, j, rows;//declare vars
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
