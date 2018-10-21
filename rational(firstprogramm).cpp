#include <iostream>
#include<stdio.h>
using namespace std;
int nod (int a,int b){
while (a!=0 && b!=0){
    if (a==b)
           return 1;
    else if (a>b)
            a=a%b;
    else
            b=b%a;
  }
return a+b;
}
struct rational{
 int m;
 unsigned int n;
 rational (int m, unsigned n);
 void show();
};
 rational (int a, int b){
     m=a/(nod(a,b));
     n=b/(nod(a,b));
 }
 rational[const rational &A]{
 m=A.m;
 n=A.n;
 }
 struct rationalcopy{
  struct rational drob1;
  struct rational drob2;
   rationalcopy(int m, int n, int m1, int n1):(drob1(m,n), drob2(m1,n1)){}
   friend rational func_plus(rational drob1,rational drob2);
   friend rational func_minus(rational drob1, rational drob2);
   friend rational func_multiplication(rational drob1, rational drob2);
   friend rational func_equal(rational drob1, rational drob2);
   friend void func_compare(rational drob1, rational drob2);
  };
rational func_equal(drob1,drob2)
{
    drob1.m=drob2.m;
    drob1.n=drob2.n;
    return ->this;
}
void func_compare(drob1,drob2)
{
    if (drob1>drob2)
        printf("first drob > second drob");
    if (drob1<drob2)
        printf("first drob < second drob");
    if (drob1=drob2)
        printf("first drob = second drob");
}
rational func_plus(drob1,drob2)
{
    rational drob3(0,0);
    drob3.n=drob1.n*drob2.n;
    drob3.m=((drob1.n*drob2.m)+(drob1.m+drob2.n));
    return drob3;
}
rational func_minus(drob1,drob2)
{
    rational drob3(0,0);
    drob3.n=drob1.n*drob2.n;
    drob3.m=((drob1.n*drob2.m)-(drob1.m+drob2.n));
    return drob3;
}
rational func_multiplication(drob1,drob2)
{
    rational drob3(0,0);
    drob3.n=drob1.n*drob2.n;
    drob3.m=drob1.m*drob2.m;
    return drob3;
}
void show()
{
    printf("First drob = %d/%d", drob1.m,drob1.n);
    printf("Second drob = %d/%d", drob2.m,drob2.n);
}
void rational::show(){
printf("%d/%d",a,b);
}
int main()
{
    rational obj(0,0);
    rationalcopy obj1(5,4,3,4);
    obj1.show();
     obj=func_plus(obj1.drob1,obj1.drob2);
     printf("sum = %d",obj);
        obj=func_minus(obj1.drob1,obj1.drob2);
        printf("sub = %d",obj);
           obj=func_multiplication(obj1.drob1,obj1.drob2);
           printf("multiplication = %d",obj);
              obj=func_equal(obj1.drob1,obj1.drob2)
              printf("equal = %d",obj);
    return 0;
}
