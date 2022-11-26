#include<stdio.h>
void main()
{
int n, a,b;
printf( " welcome! Choose a country \n ");
printf( " 1 - Belarus \n ");
printf( " 2 - Russia \n ");
printf( " 3 - USA\n ");
printf( " 4 - Japan\n ");
printf( " 5 - China\n ");
printf( " 6 - France\n ");
printf( " 7 - Exit\n ");
printf( " Your choice?\n ");
scanf("%d", &n);
switch (n)
{
case 1: printf( "Minsk\n ");
break;
case 2: printf( "Moscow\n ");
break;
case 3: printf( "Washington\n ");
break;
case 4: printf( "Tokyo\n ");
break;
case 5: printf( "Beijing\n ");
break;
case 6: printf( "Paris\n ");
break;
case 7: return; break;
default: printf( "error");
}
}
