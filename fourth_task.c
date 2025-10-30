/* Task description:
1.  Create a function that receives an array of integers as parameter, and one integer value that has to be found in the array! 
    Return the index of the element if the value was found, or return −1, if it was not. (If the value occurs multiple times in the array, it is up to you which index you return.)
    Print the array with the indices to check the result of your function. Print the index returned by the function, or the text „not found”!

2.  Modify the function (and the program) to return the memory address, instead of the index of the found element! 
    What should be returned when the value was not found in the array? Using the modified function how can you determine the index of the found element (without another search)?
    Modify the loops in the program to use pointers instead of indices. 

*/


#include <stdio.h>
#include <string.h>
/*
int index(int Arr[], int x){
  int i;
  for(i = 0; Arr[i] != '\0'; i++){
    if(Arr[i] == x){
      return i;
    }
  }
  return -1;
}
*/
/*
int* index_0 (int *t, int x){
  int i;

  for(i=0; t[i] != '\0'; i++){
    if(t[i] == x){
      return &t[i]; //or t+i
  }
  }
  return NULL;
}
*/
int* index_1 (int *t, int size, int x){
  int *p;
  for(p=t; p< t + size; p++){
    if(*p == x){
      return p;
  }
  }
  return NULL;
}


int main(){
  int Arr[] = {1, 2, 3, 4, 5, 10, 42, 54, 23, 123};
  int x = 4;
  int size;
  int i = 0;
  while (Arr[i] != '\0'){
    i++;
  }
  size = i;
  int *c = index_1(Arr, size, x);
  if(c != NULL){
    printf("Value is find by adress: %p\n", (void*)c);
    int index = c-Arr;
    printf("The index is: %d\n", index);
  }
  return 0;
}
