#include <stdio.h>
void print_diagsums(int *, int s);

void main()
{
   int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
   print_diagsums((int *)c3, 5);
}

void print_diagsums(int *a, int s)
{
	printf("%p\n%p\n%p\n%d\n%d\n%d\n", a, a+3,a+6, a[0],a[1],a[2]);
}
