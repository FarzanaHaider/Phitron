#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        printf("%d ",i);
        if(i%3==0 || i%5==0)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }

    return 0;
}
