#include <stdio.h>


int factorial ( int num )
{
	while(num >= 1){
	
	    return num * factorial( num - 1 );
	}
	return 1;
}

int main(void)
{
    int no,ans;
    printf("Enter the number \n");
    scanf( "%d", &no );
    ans = factorial( no );
    printf("The factorial is %ld ", (long)ans );
    return 0;
}
