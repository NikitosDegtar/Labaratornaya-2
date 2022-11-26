#include <stdio.h>
void main(void) {
    float a, b, c, ari,  geo ;
 printf("Enter a ");
  scanf ("%f" , &a);
 printf("Enter b ");
  scanf ("%f" , &b);
 printf("Enter c ");
  scanf ("%f" , &c);
  
	ari =( ( a + b + c ) / 3 );
	geo =   pow ( a * b * c , 0.3);
	
 if (a==0 ) printf(" %f " , ari );
  else if (b==0 ) printf(" %f " , ari);
  else if (c==0 ) printf(" %f " , ari );
  else  printf(" %f " , geo );
}

