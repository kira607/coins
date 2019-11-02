#include "f.h"

C rec()
{

C sc;

/////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////ЗАПИСЬ СТАТУСОВ МОНЕТ В ПЕРЕМЕННЫЕ///////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

st10 = fopen("/mnt/c/Users/ltdcm/prog/coins_local_copy/st/st10.txt","rt");

while(!feof(st10))
	{
	 fscanf(st10,"%d",&sc.sc10);
	}


st5 = fopen("/mnt/c/Users/ltdcm/prog/coins_local_copy/st/st5.txt","rt");

   while(!feof(st5))
        {
         fscanf(st5,"%d",&sc.sc5);
        }

st2 = fopen("/mnt/c/Users/ltdcm/prog/coins_local_copy/st/st2.txt","rt");

   while(!feof(st2))
        {
         fscanf(st2,"%d",&sc.sc2);
        }

st1 = fopen("/mnt/c/Users/ltdcm/prog/coins_local_copy/st/st1.txt","rt");

   while(!feof(st1))
        {
         fscanf(st1,"%d",&sc.sc1);
        }

st05 = fopen("/mnt/c/Users/ltdcm/prog/coins_local_copy/st/st05.txt","rt");

   while(!feof(st05))
        {
         fscanf(st05,"%d",&sc.sc05);
        }

st01 = fopen("/mnt/c/Users/ltdcm/prog/coins_local_copy/st/st01.txt","rt");

   while(!feof(st01))
        {
         fscanf(st01,"%d",&sc.sc01);
        }

st005 = fopen("/mnt/c/Users/ltdcm/prog/coins_local_copy/st/st005.txt","rt");

   while(!feof(st005))
        {
         fscanf(st005,"%d",&sc.sc005);
        }

st001 = fopen("/mnt/c/Users/ltdcm/prog/coins_local_copy/st/st001.txt","rt");

   while(!feof(st001))
        {
         fscanf(st001,"%d",&sc.sc001);
        }

   fclose (st10);
   fclose (st5);
   fclose (st2);
   fclose (st1);
   fclose (st05);
   fclose (st01);
   fclose (st005);
   fclose (st001);

/////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////КОНЕЦ//////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

sc.rub10 = sc.sc10*10 + sc.sc5*5;
sc.rub2 = sc.sc2*2 + sc.sc1*1;
sc.rub01 = sc.sc05*0.5 + sc.sc01*0.1 + sc.sc005*0.05 + sc.sc001*0.01;
sc.sum=sc.rub10+sc.rub2+sc.rub01;

return sc;
}
