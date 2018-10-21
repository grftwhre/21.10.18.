#include <iostream>
#include <stdio.h>
using namespace std;
struct arr{
int *p;
int n;
void show()
{
    for (int k=0;k!=n;k++)
        printf("%d",*p+k);
}
arr(int m)
{
    n=m;
    p=new int[n];
    for(int k=0;k!=n;k++)
    p[k]=k+1;
}
~arr()
{
delete[]p;
}
};
int main()
{
    arr massiv(7);
    massiv.show();
    return 0;
}
