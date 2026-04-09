


#include<stdio.h>

int test();
int  funcion_suma(int,int);

int main(){


  test();
    return (0);
}


int test()
{
    if(funcion_suma(2,3)==5)
      {
        //return 0;
        printf("test 01 Ok\n");
      }
    else{
            return 1;
      }

    if(funcion_suma(6,3)==9)
      {
        //return 0;
        printf("test 02 Ok\n");
       }
    else{
            return 1;
     }

     if(funcion_suma(-2,2)==0)
      {
        //return 0;
        printf("test 03 Ok\n");
       }
    else{
            return 1;
     }

     if(funcion_suma(-2,-2)==-4)
      {
        //return 0;
        printf("test 04 Ok\n");
       }
    else{
            return 1;
     }

     if(funcion_suma(2000000,8000000)==10000000)
      {
        //return 0;
        printf("test 06 Ok\n");
       }
    else{
            return 1;
     }


  return 0;
}


int  funcion_suma(int a,int b)
{

    return a+b;

}

