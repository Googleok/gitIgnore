#include <stdio.h>

int main(void)
{
	char* str = "Hello World\n";

	FILE* fp = fopen("./hello4.txt", "w");
	fputs(str, fp);
	fclose(fp);

	return 0;
}
