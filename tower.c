#include <stdio.h>
void towers(int, char, char, char);
int main()
{
int n;
printf("Enter the number of disks : ");
scanf("%d", &n);
printf("The sequence of moves :\n");
towers(n, 'A', 'C', 'B');   
return 0;
}
void towers(int n, char f, char t, char a)
{
  if (n==1)
  {
  printf("\n Move disk 1 from peg %c to peg %c", f, t);
  return;
  }
towers(n - 1, f, a, t);
printf("\n Move disk %d from peg %c to peg %c", n, f, t);
towers(n - 1, a, t, f);
}
