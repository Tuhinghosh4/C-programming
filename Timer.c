#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
	int i = 0;
	printf("%2d:%2d", i / 60, i % 60);
	printf("Press any key to start...");
	getch();
	for (i = 0; i <= 10000; i++)
	{
		system("cls");
		printf("%2d:%2d", i / 60, i % 60);
		sleep(1);
	}
	return 0;
}
