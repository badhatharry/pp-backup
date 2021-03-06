#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void swap(int *pa, int *pb){

  int tmp = *pa;
  *pa = *pb; 
  *pb = tmp;

}

int  main(void){

/*

  // arrays

  #define N 10 // define number of elements in array
  // value of a is the adress of the first element, here a[0]
 
  // int a[N];
  // a[0]= 3; a[1]= 4; a[6]= -2;
 

                                 // how to make 2 negative?? 
  double a[N]={3.0, 4.0, 0, 0, 0 , 2.0, 0, 0, 0, 0};
  printf("a[0] * a[1] + a[6] = %f\n", a[0] * a[1] + a[6]);

*/

/*

  // swap and calling functions with pointers/adresses

  int i1=3, i2=7;

  printf("i1 = %d, i2 = %d\n", i1, i2);
  swap(&i1, &i2);             
 
  // basically: define function, with *... int it, call with &... so that 
  // e.g. &i1 is put into pa. *pa then is equivalent to i1. 

  printf("i1 = %d, i2 = %d\n", i1, i2);

*/

/*

  // pointer

  int i=5;
  int *pi;     // int pointer
  int **ppi;   // int * pointer
  double d;
  double *pd;  // double pointer

  pi = &i;
  ppi = &pi;
  pd = &d;
  
  printf("i and *pi are equivalent: %d %d\n", i, *pi); 
  // * on a pointer gives the variable the pointer is pointing to
  
  printf("adress of pi: %p\n", ppi); 
  printf("adress of d: %p\n", pd); 

*/  


/*

  // adress operator "&" and sizeof()  
  
  int i1, i2;
  double d1, d2;
  
  printf("sizeof(int) = %zd\n", sizeof(int));
  printf("sizeof(double) = %zd\n", sizeof(double));

  printf("adress of i1: %p\n", &i1);
  printf("adress of d1: %p\n", &d1);

  printf("adress of i1: %lu\n", (unsigned long)&i1);
  printf("adress of d1: %lu\n", (unsigned long)&d1);

*/

}


