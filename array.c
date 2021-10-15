include <stdio.h>
#define N 10 

int array[N]={1,2,5,71,99,0,5,16,26,3};

void Shell(int *array, int n) {
  int i,x,y,tmp;

  for(i = 1; i < n; i = i*3+1) {} 

    while (i > 0) {
      for(x = i; x < n; x++) {
        y = x;
        tmp = array[x];
        while (y >= i && array[y - i] > tmp) {
          array[y] = array[y - i];
          y = y - i;
        }
        array[y] = tmp;
      }
      i = i / 2;
    }
}
int main() {

  Shell(array,N);
  return 0;
}
