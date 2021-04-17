#include <stdio.h>
 
int lcm(int, int);
 
int main()
{
    int a, b;
    
 
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("LCM of %d and %d = %d\n", a, b,lcm(a, b));
    return 0;
}
 
int lcm(int a, int b)
{ 
    static int common = 1;
 
    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    lcm(a, b);
    return common;
}
