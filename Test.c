#include<stdio.h>

int main()

{

for(int i=1;i<1000;i++)

{

for(int j=1;j<1000;j++)
{

if(i==j*j+j)

printf("%d %d\n",i,j);

}

}

return 0;

}
