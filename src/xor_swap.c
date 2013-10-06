#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* xor_swap.c
   Program to demonstrate swapping two variables using XOR.
   Usage: xor_swap <x> <y>
   Where x and y are integers less than 256. */

void print_binary(int n){
  int i;

  /* Only print out the first 8 bits. */
  char binary[9];
  char output[9];

  strcpy(binary, "\0");
  for( i = 0; i < 8; i++){
    if (n & 1) {
      strcat(binary, "1");
    }else{
      strcat(binary, "0");
    }
    n >>= 1;
  }

  /* Reverse string */
  strcpy(output, binary);
  for( i = 0; i < 8; i++ ){
    output[7 - i] = binary[i];
  }

  printf("%s", output);
}

int main(int argc, char *argv[]){

  if( argc < 3 ){
    fprintf(stderr, "Usage: %s <x> <y>\n", argv[0]);
    fprintf(stderr, "Where x and y are integers less than 256.\n");
    return -1;
  }

  int x = atoi(argv[1]);
  int y = atoi(argv[2]);

  printf("Starting values: x = %d, y = %d\n", x, y);
  printf("x = ");
  print_binary(x);
  printf("\n");
  printf("y = ");
  print_binary(y);
  printf("\n");

  x = x^y;
  printf("x = x^y\n");
  printf("x = ");
  print_binary(x);
  printf("\n");
  printf("y = ");
  print_binary(y);
  printf("\n");

  y = x^y;
  printf("y = x^y\n");
  printf("x = ");
  print_binary(x);
  printf("\n");
  printf("y = ");
  print_binary(y);
  printf("\n");

  x = x^y;
  printf("x = x^y\n");
  printf("x = ");
  print_binary(x);
  printf("\n");
  printf("y = ");
  print_binary(y);
  printf("\n");

  printf("Ending values: x = %d, y = %d\n", x, y);

  return 0;

}
