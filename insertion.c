#include<stdio.h>

int main()
{int k,c,j ;
  int array[7]={4,23,43,38,15,10,30};
for (c = 1 ; c <=7; c++) {
  k=array[c];
 
  for(j=c-1;(j>0)&&(k=array[j]);j--) {
    array[j+1]=array[j];
    }
  array[j+1]=k;
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <=6; c++) {
    printf("%d\n", array[c]);
  }
    return 0;
  }
