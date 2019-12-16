
#include <stdio.h>


int main(void){

  // Signed Integer Data
  printf("Signed integer Data.........\n");
  short a = 45; // %d %hi
  printf("I am short - %hi\n", a);

  // int => %d %i
  int b = 1000;
  printf("I am Integer %d\n", b);

  // Long --> %ld, %li
  long c = 1200L;
  printf("I am Long - %ld\n", c);

  // Long Long - %lld , %lli
  long long d  = 345345LL;
  printf("I am long long - %lld\n", d);

  // octal int --> %o
  int o = 0776;
  printf("I am Octal Number- %o\n", o);

  // Hexadesimal int --> %x, %X
  int h = 0xfff;
  printf("I am hexadesimal - %X\n", h);


  // Unsigned Data.........
  printf("Unsiged Interger Data.......\n");

  // unsigned short --> %hu
  unsigned short us = 41;
  printf("unsigned short %hu\n", us);

  // unsigned Int --> %u
  


  return 0;

}