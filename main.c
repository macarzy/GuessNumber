#include <stdlib.h>
#include <time.h>
int main (void)
{
    int guessnum=0; //a 是使用者輸入 b是電腦亂數
    int target=0;
    int low=1,high=99; //一開始，下限＝1,上限＝100
    int count=0; //計數

    srand((unsigned)time(NULL));
    target=rand()%(high-low+1)+low; //亂數產生在 low ～ high 之間
    while(1)
    {
        printf("# %d，plz guess %d ～ %d  ==> ",++count, low, high);
        scanf("%d",&guessnum);
        while(guessnum<low||guessnum>high)
        {
            printf("WRONG RANGE!!\n");
            break;
        }


        if(guessnum>=low&&guessnum<=high)
        {
            if(guessnum==target)
            {
                printf("U WIN!! ANS:%d\n", guessnum);
                break;
            }

            else if(guessnum>target)
            {
                printf("Fail! guess smaller\n");
                high = guessnum-1;
            }
            else if(guessnum<target)
            {
                printf("Fail! guess bigger\n");
                low = guessnum+1;
            }
        }

        if(low==high)
        {
            printf("Ans:%d \n",low);
        }
    }

    system("pause");
}
