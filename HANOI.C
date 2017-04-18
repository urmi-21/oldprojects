#include <stdio.h>
#include <stdlib.h>


#define FROM	"Peg A"
#define TO	"Peg C"
#define USING	"Peg B"

void hanoi(int N, char *from, char *to, char *using)
{
  if (N > 0)
  {
    hanoi(N-1, from, using, to);
    printf ("move disk from %s to --> %s\n", from, to);
    hanoi(N-1, using, to, from);
  }
}


int main()
{
   int N;
  printf("\nEnter the no of disks:");
  scanf("%d",&N);
  printf("\nSolution\n");
  hanoi(N, FROM, TO, USING);


  (void) getchar();
  return 0;

}
