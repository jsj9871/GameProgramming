#include <stdio.h>

int main()
{
	char string[20];
	char c;
	
	printf("���ڿ� �Է� : ");
	scanf("%s", string);
	printf("���� �Է� : ");
	scanf(" %c", &c);
	 
	printf("%s\n", string);
	printf("!!%C!!\n", c);
	
	return 0;
}
