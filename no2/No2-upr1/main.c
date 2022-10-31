#include "iostream"
#include "stdlib.h"
#include "conio.h"
#include "windows.h"
 using namespace std;
 
void main()
{
   char arr[3];
   cout<<"Vvedite  tri chisla"<<endl;
for (int i=0;i<3;i++)
   cin>>arr[i];
for (int i=0;i<3;i++)
{
for(int j=i;j<3;j++)
if((arr[j]==arr[j+1])||(arr[j]==arr[j+2]))
cout<<" BINGO!"<<endl;
}
   
_getch();
}