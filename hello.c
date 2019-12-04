#include <stdio.h>
#include <stdlib.h>

int main(void) {


  char *name = getenv("USER");	
  printf("hi %s\n", name);
  
  return EXIT_SUCCESS;
}
