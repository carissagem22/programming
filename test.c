#include <stdio.h>
int print_times(int n, int times) {
  return n* times;
}

int main(void)
{
  printf("hello, world\n");
  int result = print_times(2,4);
  printf("The multiplication is: %d\n",result);
  
  // Print 5
  result = 5;
  printf("%d \n", result);

  // int a1 = 1;
  // int a2 = 2;
  // int a3 = 3;
  // ....

  // int a20 = 20;

  // print("%d \n", a1);
  // print("%d \n", a2);
  // print("%d \n", a3);
  // print("%d \n", a20);

  // Print 5 integers from 1 to 20 on your screen
  int mark[5] = {1, 2, 3, 4, 5};

  /*
      0   1   2   3   4  5
    [ 1 | 2 | 3 | 4 | 5 ]
  */

  // For loop

  for (int i = 0; i < 5; i++) {
    printf("%d \n", mark[5]);
  }
}


