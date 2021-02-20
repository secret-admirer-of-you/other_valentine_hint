#include <stdio.h>

void emit_hint (FILE *fh) {
  int a = 5;
  int b = 19;
  int c = 2;


  for (int i=0; i<2; i++) {
    int d = b*a/c-1;
    for (int j=c-i; j>0; j--) {
      fprintf(fh, "%c ", a*b);
    }
    fprintf(fh, "%c ", d);
    for (int j=a+1; j>0; j--) {
      fprintf(fh, "%c ", a*b);
    }

    if (i==1) 
      fprintf(fh, "%c", '0'+b/a);
    else
      fprintf(fh, "%c   %c ", d-2, d-1);
  }
  fprintf(fh, "\n");
}
