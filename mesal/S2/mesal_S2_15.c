// hads adad tolid shodeh tavasot computer
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // tarif moteghayer ans = shart edameh halgheh, ran = adad random, hads = adad hadsy carbar, count = shomaresh tydad hads ha.
    char ans = 'y';
    int ran, hads;
    int count = 0;

    // halgheh baray tekrar kamel barnameh
    while(ans == 'y')
    {
        // tarif moteghayer
        int count = 0;
        // ejad yek adad random az 0 ta 100
        ran = rand() % 101;

        // daryaft adad az karbar va barresy An
        while (1)
        {
            printf("\nhads bezan adad chandeh? ");
            scanf("%d", &hads);

            // rahnamaey baray karbar
            if (hads > ran)
                printf("\nziad gofty. kam tar bego");
            else if(hads < ran)
                printf("\nkam gofty. bishtar bego");

            count ++;

            // barresy dorost bodan adad, shart khoroj az halgheh
            if (ran == hads)
            {
                printf("dorost gofty");
                break;
            }
        }

        // chap khorojy
        printf("\nshoma ba %d hads be javab residid.", count);
        if (count == 1)
            printf("\nbavar nakardani bod");
        else if (count > 1 && count <= 10)
            printf("\nAly bod");
        else if (count > 10 && count <= 20)
            printf("\nbad nabood...");
        else
            printf("\nkhyely bad bod");

        // porsesh shart edameh halgheh
        printf("\ndo yuo want to continue?(y/n)");
        scanf("%s", &ans);
    }
    return 0;
}
