#include "f.h"

void about()
{
 FILE *inf;
   inf = fopen("./st/about.txt","rt");

   char arr[80];
   
   printf("\n");
   while (fgets (arr, 80, inf) != NULL) {printf("%s%s%s",BLUE,arr,NONE);}
   printf("\n");
   printf("%sPress ENTER to exit%s",RED,NONE);
   printf("\n");
   getchar();
}