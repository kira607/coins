#pragma once //Защита от повторного включения

#include <stdio.h>	//<<<	<<<		<<<
#include <stddef.h>	//Стандартные библиотеки
#include <malloc.h>	//<<<	<<<		<<<

//		\033[STYLE;BACKGROUND_COLOR;FOREGROUND_COLORm
//			#define RED   "\033[0;31m"

#define NONE "\033[0m"		//	NONE Color of text
#define RED "\033[31m"		//	RED Color of text
#define BLUE "\033[94m"		//	BRIGHT BLUE Color of text
#define GREEN "\033[32m"	//	GREEN Color of text

typedef struct coins
{
	int sc10;			//status of coin "10"
	int sc5;			//status of coin "5"
	int sc2;			//status of coin "2"		Структура хранит информацию о статусах
	int sc1;			//status of coin "1"		Всех монет и о сумме денег во всех копилках
	int sc05;			//status of coin "0.50"
	int sc01;			//status of coin "0.10"
	int sc005;			//status of coin "0.05"
	int sc001;			//status of coin "0.01"
						//
	int rub10; 			//status of "ROCKET"
	int rub2;			//status of "WHITE"
	float rub01;		//status of "PIN"
	float sum;			//status of ALL
}C;						//struct name = "C"

//Функции//
int main();
void privet();
void menu();
void stat();
void addc();
void delc();
void about();
C rec();

//Файлы//
FILE *st10;	//	= fopen("st10.txt","rt");
FILE *st5; 	//	= fopen("st5.txt","rt");
FILE *st2;	//	= fopen("st2.txt","rt");
FILE *st1;	//	= fopen("st1.txt","rt");
FILE *st05;	//	= fopen("st05.txt","rt");
FILE *st01;	//	= fopen("st01.txt","rt");
FILE *st005;	//	= fopen("st005.txt","rt");
FILE *st001;	//	= fopen("st001.txt","rt");
