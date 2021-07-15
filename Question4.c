/* Accept number from user and display below pattern.
Input : 4
Output : # 1 * # 2 * # 3 * # 4 *
*/
#include<stdio.h>

void Pattern(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(i=1;i<=iNo;i++)
    {
        printf("#\t%d\t*\t",i);
    }

}
int main()
{
    int iValue=0;

    printf("Enter number of elements:");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}
