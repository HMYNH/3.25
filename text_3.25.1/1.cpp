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
		printf("请选择：>");
		scanf("%d", &M);
		switch (M)
		{
		  case 1:
			/*	printf("三子棋\n");*/
			game();
			break;
		  case 0:
			printf("退出游戏\n");
			break;
		  default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (M);
}
int main()
{
	test();
	return 0;
}