// Program to demonstrate pointer usage and swapping values using pointers
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int swap(int*, int*);
    swap(&a,&b);
    printf("%d %d", a,b);
}
    int swap(int*x,int*y)

    {
        int z;
        z = *x;
        *x = *y;
        *y = z;
    }


