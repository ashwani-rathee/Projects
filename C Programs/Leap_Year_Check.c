#include <stdio.h>
//author:ashwani rathee
//date:9-12-2019
int main(void)
{
    int y;
    printf("Enter year: ");
    scanf("%d",&y);
    if(y % 4 == 0)
    {
    	//Nested if else
        if( y % 100 == 0)
        {
            if ( y % 400 == 0)
                printf("%d is a LEAP Year", y);
            else
                printf("%d is not a LEAP Year", y);
        }
        else
            printf("%d is a LEAP Year", y );
    }
    else
        printf("%d is not a LEAP Year", y);
    return 0;
}
