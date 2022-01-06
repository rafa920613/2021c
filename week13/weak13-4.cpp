#include <stdio.h>
void printfstar(int n)
{
    for(int i=0;i<n;i++) printf("*");
}
int main()
{
    for(int i=1;i<=10;i++){
        printfstar(i);///他會印出很多星星
        printf("\n");
    }

}
