/* Task description:
Write a function that receives an integer array, and separates the even and the odd elements of the array.
The even elements are put into a second array, and the odd ones are put into a third array; both of them are function arguments, and are assumed to be large enough to store all even and odd elements.

Write a function to print the integer array received as a function parameter!

Write a main function that separates the even and odd elements of an array and prints them to the screen!

*/


#include <stdio.h>
#include <string.h>

void separeta(int in[], int size, int even[], int *evensize, int odd[], int *oddsize){
  int i;
  int *evensize = 0;
  int *oddsize = 0;
  for (i=0; i<size; i++){
    if(in[i]%2 == 0){
      even[*evensize] = in[i];
      evensize++;
    }else{
      odd[*oddsize] = in[i];
      oddsize++;
    }
  }
}

void printArray( int in[], int size, const char *label){
  printf("%s: ", label);
  for (i=0; i<size; i++){
    printf("%d\n", in[i]);
  }
}
int main(){
  int numbers[] = {1, 2, 32, 43, 54, 65, 76, 12333};
  int size = 8;
  

  return 0;
}
