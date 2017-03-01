#include <stdio.h>
void main()
{
    char p[] = "Mizzou";
    *(p+3) = 'a';
    printf("%s\n",p);
}
