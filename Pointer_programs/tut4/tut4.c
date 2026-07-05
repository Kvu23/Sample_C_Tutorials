/*this program demonstrates simple exercises of the pointer operations*/

#include <stdio.h>

int main(void) {
  int arr[5] = {100, 200, 300, 400, 500};

  int *p = arr; // p points to the first element of arr
  ++*p;         // Increment the value pointed to by p (arr[0] becomes 101)

  printf("arr[0] = %d, arr[1] = %d, *p = %d\n", arr[0], arr[1],
         *p); // Output: arr[0] = 101, arr[1] = 200, *p  = 101

  return 0;
}