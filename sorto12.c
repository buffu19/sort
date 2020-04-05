#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

int tab[10000], n, i, d, a,x;
int z1;
int z2;
int k;

srand(time(NULL));

for(i=0;i<10000;i++)
{
  tab[i] = rand()%100+1;
}

for(k = 100; k < 10001; k = k + 100)
    {
    z1=0;
    z2=0;



for(i = 1; i < n; i++)
    {
        x = tab[i];
        for(k = i-1; k >= 0; k--)
        {
        	z1++;
            if(x < tab[k])
            {
            	
                tab[k+1] = tab[k];
                z2++;
            }
            else
                break;
        }
        tab[k+1] = x;
        
    }


    printf("Iteracja: %d Porownania: %d Podstawienia: %d \n" , k, z1, z2);
    }

return 0;
}

