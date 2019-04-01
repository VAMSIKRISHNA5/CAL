#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "calculat.h"
void testcase(void)
{
    assert(calc_1(10,9,1)== 19);
 printf("\nOK");
  assert(calc_1(11,-11,1)== 0);
 printf("\nOK");
 assert(calc_1(-13,-3,1)== -16);
 printf("\nOK");
 assert(calc_1(15,10,2)== 5);
 printf("\nOK");
 assert(calc_1(16,-3,2)== 19);
 printf("\nOK");
 assert(calc_1(-2,-48,2)== 46);
 printf("\nOK");
 assert(calc_1(32,0,4)== 0);
 printf("\nOK");
}
void main(void){
 printf("Calculator test using assert :");

testcase();

}
