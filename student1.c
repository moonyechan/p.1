#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct student
{
	int number;
	char name[10];
	double grade;
};

int main(void) {
	struct student s[10];
	s[0].number = 20230001;
	strcpy_s(s[0].name, "ȫ�浿");
	s[0].grade = 4.3;

	s[1].number = 202032018;
	strcpy_s(s[1].name, "������");
	s[1].grade = 4.50;

	printf("�й�: %d\n", s[0].number);
	printf("�̸�: %s\n", s[0].name);
	printf("����: %.2lf\n\n", s[0].grade);

	printf("�й�: %d\n", s[1].number);
	printf("�̸�: %s\n", s[1].name);
	printf("����: %.2lf\n", s[1].grade);

	return 0;
}