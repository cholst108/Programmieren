#include <stdio.h>

int main(){
    int a,b,c;
    int *a_ptr,*b_ptr, *c_ptr;
    
    a = b  = 2;
    a_ptr = &a;
    b_ptr = &b;
    c_ptr = &c;

    *a_ptr = 3;
    c =  a + b;
    printf("%i + %i = %i\n", a,b,c);
    *c_ptr = 99;
    printf("%d + %d = %d\n", a,b,c);
    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b);

    return 0;

}
