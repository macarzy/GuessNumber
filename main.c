#include <stdlib.h>
#include <time.h>
int main (void)
{
    int guessnum=0; //a �O�ϥΪ̿�J b�O�q���ü�
    int target=0;
    int low=1,high=99; //�@�}�l�A�U����1,�W����100
    int count=0; //�p��

    srand((unsigned)time(NULL));
    target=rand()%(high-low+1)+low; //�üƲ��ͦb low �� high ����
    while(1)
    {
        printf("# %d�Aplz guess %d �� %d  ==> ",++count, low, high);
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
