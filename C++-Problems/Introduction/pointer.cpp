//You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets with the sum of them, and  with the absolute difference of them.



#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int x=0,y=0;
    *a=*a+*b;
    *b=abs(*a-*b-*b);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}