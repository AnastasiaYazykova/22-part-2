#include<stdio.h>
#include <Windows.h>
#include<ctype.h>


void main() {


	SetConsoleCP(1251);

	SetConsoleOutputCP(1251);

	char s[80];
	printf("�������� ������:");
	fgets(s, 79, stdin);
	printf(" \n�� ����� ������ s=\"%s\" ", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isdigit(s[i]))
			s[i] = 'X';
	}
	printf(" \n�� ����� ������ s=\"%s\" ", s);

}