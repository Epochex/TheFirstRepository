#include<stdio.h>

int main() {
	typedef long int64_t;
	typedef struct Adate {
		int  day;
		int month;
		int year;
	}date;
	int64_t i = 114514;
	date d = { 25,114,245 };
	printf("%i %i %i ", d);
}