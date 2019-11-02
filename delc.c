#include "f.h"

void delc()
{

	C sc = rec();	//Запись статусов
	int input=1;	//Выбор в меню
	int del;		//Удаляемое кол-во монет


	while(input!=9)
	{
		printf("\n");
		printf("                  %sВыбрано удаление монет%s\n",BLUE,NONE);
		printf("%s__________________________________________________________%s\n",GREEN,NONE);
		printf("%s|----------------------ВЫБЕРИТЕ МОНЕТУ-------------------|СТАТУС:%s\n",GREEN,NONE);
		printf("%s|1.........................10...........................1|%d%s\n",GREEN, sc.sc10, NONE);
		printf("%s|2.........................5............................2|%d%s\n",GREEN, sc.sc5, NONE);
		printf("%s|3.........................2............................3|%d%s\n",GREEN, sc.sc2, NONE);
		printf("%s|4.........................1............................4|%d%s\n",GREEN, sc.sc1, NONE);
		printf("%s|5.........................0.5..........................5|%d%s\n",GREEN, sc.sc05, NONE);
		printf("%s|6.........................0.1..........................6|%d%s\n",GREEN, sc.sc01, NONE);
		printf("%s|7.........................0.05.........................7|%d%s\n",GREEN, sc.sc005, NONE);
		printf("%s|8.........................0.01.........................8|%d%s\n",GREEN, sc.sc001, NONE);
		printf("%s|9........................ОТМЕНА........................9|%s\n",GREEN, NONE);
		printf("%s|________________________________________________________|%s\n",GREEN, NONE);

		if(input!=(1||2||3||4||5||6||7||8||9||-1)) {
		printf("              %sОшибка ввода. Повторите ввод%s",RED,NONE);}

		printf("\n");

		printf(" Ввод: ");

		scanf("%d",&input);

			switch(input)
			{
				case 1: //10
					printf("      ");
					printf("%sВведите количество монет: %s",GREEN,NONE);

					scanf("%d", &del);
					st10 = fopen("./st/st10.txt","w");
					fprintf(st10 ,"%d",sc.sc10-del);
					fclose(st10);

					printf("    %sУдалено %d монет достоинством \"10\"%s\n",GREEN,del,NONE);
					printf("            %sСтатус обновлён%s\n\n",GREEN,NONE);
					printf("             %sНажмите ENTER%s",GREEN,NONE);

					del=0;
					input=9;
					getchar();
					break;

				case 2: //5
					printf("      ");
					printf("%sВведите количество монет: %s",GREEN,NONE);

					scanf("%d", &del);
					st5 = fopen("./st/st5.txt","w");
					fprintf(st5 ,"%d",sc.sc5-del);
					fclose(st5);

					printf("    %sУдалено %d монет достоинством \"5\"%s\n",GREEN,del,NONE);
					printf("            %sСтатус обновлён%s\n\n",GREEN,NONE);
					printf("             %sНажмите ENTER%s",GREEN,NONE);

					del=0;
					input=9;
					getchar();
					break;

				case 3: //2
					printf("      ");
					printf("%sВведите количество монет: %s",GREEN,NONE);

					scanf("%d", &del);
					st2 = fopen("./st/st2.txt","w");
					fprintf(st2 ,"%d",sc.sc2-del);
					fclose(st2);

					printf("    %sУдалено %d монет достоинством \"2\"%s\n",GREEN,del,NONE);
					printf("            %sСтатус обновлён%s\n\n",GREEN,NONE);
					printf("             %sНажмите ENTER%s",GREEN,NONE);

					del=0;
					input=9;
					getchar();
					break;

				case 4: //1
					printf("      ");
					printf("%sВведите количество монет: %s",GREEN,NONE);

					scanf("%d", &del);
					st1 = fopen("./st/st1.txt","w");
					fprintf(st1 ,"%d",sc.sc1-del);
					fclose(st1);

					printf("    %sУдалено %d монет достоинством \"1\"%s\n",GREEN,del,NONE);
					printf("            %sСтатус обновлён%s\n\n",GREEN,NONE);
					printf("             %sНажмите ENTER%s",GREEN,NONE);

					del=0;
					input=9;
					getchar();
					break;

				case 5: //0.5
					printf("      ");
					printf("%sВведите количество монет: %s",GREEN,NONE);

					scanf("%d", &del);
					st05 = fopen("./st/st05.txt","w");
					fprintf(st05 ,"%d",sc.sc05-del);
					fclose(st05);

					printf("    %sУдалено %d монет достоинством \"0.5\"%s\n",GREEN,del,NONE);
					printf("            %sСтатус обновлён%s\n\n",GREEN,NONE);
					printf("             %sНажмите ENTER%s",GREEN,NONE);

					del=0;
					input=9;
					getchar();
					break;

				case 6: //0.1
					printf("      ");
					printf("%sВведите количество монет: %s",GREEN,NONE);

					scanf("%d", &del);
					st01 = fopen("./st/st01.txt","w");
					fprintf(st01 ,"%d",sc.sc01-del);
					fclose(st01);

					printf("    %sУдалено %d монет достоинством \"0.1\"%s\n",GREEN,del,NONE);
					printf("            %sСтатус обновлён%s\n\n",GREEN,NONE);
					printf("             %sНажмите ENTER%s",GREEN,NONE);

					del=0;
					input=9;
					getchar();
					break;

				case 7: //0.05 005
					printf("      ");
					printf("%sВведите количество монет: %s",GREEN,NONE);

					scanf("%d", &del);
					st005 = fopen("./st/st005.txt","w");
					fprintf(st005 ,"%d",sc.sc005-del);
					fclose(st005);

					printf("    %sУдалено %d монет достоинством \"0.05\"%s\n",GREEN,del,NONE);
					printf("            %sСтатус обновлён%s\n\n",GREEN,NONE);
					printf("             %sНажмите ENTER%s",GREEN,NONE);

					del=0;
					input=9;
					getchar();
					break;

				case 8: //0.01 001
					printf("      ");
					printf("%sВведите количество монет: %s",GREEN,NONE);

					scanf("%d", &del);
					st001 = fopen("./st/st001.txt","w");
					fprintf(st001 ,"%d",sc.sc001-del);
					fclose(st001);

					printf("    %sУдалено %d монет достоинством \"0.01\"%s\n",GREEN,del,NONE);
					printf("            %sСтатус обновлён%s\n\n",GREEN,NONE);
					printf("             %sНажмите ENTER%s",GREEN,NONE);

					del=0;
					input=9;
					getchar();
					break;

				case 9: //ОТМЕНА
					input=9;
					break;

				default:
					printf("Ошибка ввода. Повторите ввод\n");
			}
	}
}