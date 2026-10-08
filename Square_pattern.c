#include <stdio.h>
int main()
{
    for(int i = 1; i <= 5; i++)//i-control rows
    {
        for(int j = 1; j<= 5; j++)//j-control colums
        {
            printf("* ", j);
        }
        printf("\n");
    }
    return 0;

}
