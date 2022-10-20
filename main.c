#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
int main()
{
	printf("%d\n" ,  ft_printf(" %p ", LONG_MIN));
	printf("%d\n" ,  printf(" %p ", LONG_MIN));



//	printf("%d\n" ,  ft_printf(" %p %p", 555, 4294967295));
//	printf("%d\n" ,  printf(" %p %p",555,  4294967295));

}
