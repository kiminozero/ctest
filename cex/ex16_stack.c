#include<stdio.h>
struct STRUCT_XX
{
    int a;
    int b;
};
 
int test(struct STRUCT_XX xx )
{
    printf("xx.a=%d, xx.b=%d", xx.a, xx.b);
    return xx.a+xx.b;
}
int main(int argc,char* argv[])
{
    struct STRUCT_XX xx = {1,2};
    test(xx);
 
    return 0;
}
