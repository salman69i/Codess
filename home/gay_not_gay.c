#include <stdio.h>

int main()
{
    int gay;

st:
    printf("\nAre you lesbian?\n 1-yes of courseee....\n 2-naaaaaaa......\n 3-surprise option \n");
    printf("\nEnter your choice: ");
    
    scanf("%d", &gay);

    switch (gay)
    {
    case 1:
        printf("\n chi vai tui lesbian astagfirullahhhhh ^_^\n");

        break;

    case 2:
        printf("\nMittha kan koiteso vai sikar kor j tui lesbooo ^_^\n");
        goto st;
        break;

    case 3:
        printf("\nmaybe cause i like girlsss O.O\n");
        break;
    default:
        printf("\nulda palda na koia sotti koirra ko j tui lesbian ki na ^_^\n");
        goto st;
        break;
    }

    return 0;
}