#include <stdio.h>

int main()
{
    int sagol, yes = 1, no = 2;

st:
    printf("\nAre you sagol?\n 1-yes of courseee....\n 2-naaaaaaa......\n");
    printf("\nEnter your choice: ");
    scanf("%d", &sagol);

    switch (sagol)
    {
    case 1:
        printf("\n Haeee eitooo sottiiii boltesooo goooddd girrllllll ^_^\n");

        break;

    case 2:
        printf("\nMittha bolteso kano sotti kore abar vebe boloooo ^_^\n");
        goto st;
        break;

    default:
        printf("\nvulval option kan diteso sagol 1 daw r mene naw tumi sagollll ^_^\n");
        goto st;
        break;
    }

    return 0;
}