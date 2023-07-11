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
	strcpy_s(s[0].name, "홍길동");
	s[0].grade = 4.3;

	s[1].number = 202032018;
	strcpy_s(s[1].name, "문예찬");
	s[1].grade = 4.50;

	printf("학번: %d\n", s[0].number);
	printf("이름: %s\n", s[0].name);
	printf("학점: %.2lf\n\n", s[0].grade);

	printf("학번: %d\n", s[1].number);
	printf("이름: %s\n", s[1].name);
	printf("학점: %.2lf\n", s[1].grade);

	return 0;
}