#include <stdio.h>

int main()
{
    int gay;

st:
    printf("\nAre you gay?\n 1-yes of courseee....\n 2-naaaaaaa......\n 3-surprise option \n");
    printf("\nEnter your choice: ");
    scanf("%d", &gay);

    switch (gay)
    {
    case 1:
        printf("\n chi vai tui gay astagfirullahhhhh ^_^\n");

        break;

    case 2:
        printf("\nMittha kan koiteso vai sikar kor j tui gayyy ^_^\n");
        goto st;
        break;

    case 3:
        printf("\nmaybe cause i like boyssss O.O\n");
        break;
    default:
        printf("\nulda palda na koia sotti koirra ko j tui gay ki na ^_^\n");
        goto st;
        break;
    }

    return 0;
}