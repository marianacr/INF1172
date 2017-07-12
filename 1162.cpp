#include <cstdio>
#include <algorithm>

int train[51];

int up(int j, int k)
{
    for (int i = 0; i < j; ++i)
        if(train[i] == k)
            return i;
 
    return -1;
}

int main(int argc, char const *argv[])
{
 int n, l,i, j, aux;

 scanf("%d", &n);

 while(n--)
 {
  scanf("%d", &l);
  for (i = 0; i < l; ++i)
   scanf("%d", &train[i]);

  i = 0; j = 0;

  while(i < l)
  {
   while(train[i] != (i + 1))
   {
    aux = up(l, i + 1);
    swap(train[aux - 1], train[aux]);
    j++;
   }
   i++;
  }

  printf("Optimal train swapping takes %d swaps.\n", j);
 }

 return 0;
}