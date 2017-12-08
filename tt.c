#include<stdio.h>

int main()
{
	int i;
	char j;
	char str[4] = "****";
	for (i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++)
			j = '\0' + str[i];
		printf("%s", j);
	printf("\n");
	}
	return 0;
}

