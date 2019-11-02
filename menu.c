#include "f.h"

void menu()
{

int input=0;

	while(input!=5)
	{
		printf("%s__________________________________________________________%s\n",GREEN,NONE);
		printf("%s|--------------------------МЕНЮ--------------------------|%s\n",GREEN,NONE);
		printf("%s|1...1...1.............СТАТУС КОПИЛОК...........1...1...1|%s\n",GREEN,NONE);
		printf("%s|2...2...2............ДОБАВЛЕНИЕ МОНЕТ..........2...2...2|%s\n",GREEN,NONE);
		printf("%s|3...3...3.............УДАЛЕНИЕ МОНЕТ...........3...3...3|%s\n",GREEN,NONE);
		printf("%s|4...4...4..............О ПРОГРАММЕ.............4...4...4|%s\n",GREEN,NONE);
		printf("%s|5...5...5.................ВЫХОД................5...5...5|%s\n",GREEN,NONE);
		printf("%s|________________________________________________________|%s\n",GREEN,NONE);
		printf("%sВвод:%s ",GREEN,NONE);
		scanf("%d",&input);
		
		switch(input)
		{
			case 1:
				stat();
				getchar();
				break;

			case 2:
				addc();
				getchar();
				break;

			case 3:
				delc();
				getchar();
				break;

			case 4:
				about();
				getchar();
				break;

			case 5:
				printf("Спасибо за использование программы!!!\n");
				printf("Выход...\n");
				break;

			default:
				printf("%sОшибка ввода. Повторите ввод%s\n",RED,NONE);
				menu();
				break;
	}
	}
}
