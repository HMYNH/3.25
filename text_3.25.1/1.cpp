#include"game.h"

void H()
{
	printf("******************************\n");
	printf("***     1. piay   0. exit   **\n");
	printf("******************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	SetMine(mine,ROW, COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}
void test()
{
	int M = 0;
	srand((unsigned int)time(NULL));
	do
	{
		H();
		printf("��ѡ��>");
		scanf("%d", &M);
		switch (M)
		{
		  case 1:
			/*	printf("������\n");*/
			game();
			break;
		  case 0:
			printf("�˳���Ϸ\n");
			break;
		  default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (M);
}
int main()
{
	test();
	return 0;
}