#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Problema 17: Pentru un n citit de la tastatură să se afişeze valorile mai mari/mai mici decât n de 2,4,8,16
            ori obţinute prin inmulţiri/impărţiri, respectiv deplasări.  */

    int n;
    printf("n=");
    scanf("%d",&n);
    printf("%d %d %d %d\n",n*2,n*4,n*8,n*16);
    printf("%d %d %d %d\n",n/2,n/4,n/8,n/16);
    printf("%d %d %d %d\n",n<<1,n<<2,n<<3,n<<4);
    printf("%d %d %d %d\n",n>>1,n>>2,n>>3,n>>4);

/* Problema 18: Să se scrie un program care citește două numere intregi a și b și afișează pe linii separate:
            a, b, !a, !b, a&&b, a||b, !a&&b||!b&&a. */

    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf(" Pentru a:%d\n Pentru b:%d\n Pentru !a:%d\n Pentru !b:%d\n Pentru a&&b:%d\n Pentru a||b:%d\n Pentru !a&&b||!b&&a:%d\n",
           a,b,!a,!b,a&&b,a||b,!a&&b||!b&&a);


/* Problema 19: Se citește un întreg care reprezintă un an calendaristic. Să se scrie un program care
            afișează 1 dacă anul este bisect și 0 dacă nu este bisect. */

    int an;
    printf("an=");
    scanf("%d",&an);
    if (an%400==0||(an%4==0&&an%100!=0))
        printf("1");
    else
        printf("0");

}
