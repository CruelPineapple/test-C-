<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int score[5];
    int i;
    float sum=0;

    for ( i = 0; i < 5; ++i)
    {
        scanf("%d",&score[i]);
    }
    int j=0;
    int max=score[j];
    for ( i = 0; i < 5; ++i)
    {
        if (max<score[i])
            
        {
            max=score[j=i];
        }
        
    }
    printf("最大%d",max);
    
    return 0;
=======
#include<stdio.h>
int main()
{
    int score[5];
    int i;
    float sum=0;

    for ( i = 0; i < 5; ++i)
    {
        scanf("%d",&score[i]);
    }
    int j=0;
    int max=score[j];
    for ( i = 0; i < 5; ++i)
    {
        if (max<score[i])
            
        {
            max=score[j=i];
        }
        
    }
    printf("最大%d",max);
    
    return 0;
>>>>>>> be9b868b94dda100b8f009499d4b3e27b5f14da9
}