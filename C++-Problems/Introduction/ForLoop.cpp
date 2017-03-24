#include <stdlib.h>
#include<stdio.h>
int main() {
  int a,b;
    char *arr[]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
        {
         if(i>=1 && i<=9)
             {
             printf("%s",arr[i-1]);
             }
        else if (i>9)
        {
            if(i%2==0)
        {
            printf("%s",arr[9]);
        }
        else
            {printf("%s",arr[10]);}
        
        }
        printf("\n");
    }
    

    return 0;
}
