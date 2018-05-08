//p416 title 13

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct flight
{
	int minutes;
	char departure[5];
	char arriving[5];
}table[8] = { { 480,"8:00", "10:16"},{583,"9:43","11:52"},{679,"11:19","13:31"},\
              { 767,"12:47","15:00"},{840,"14:00","16:08"},{945,"15:45","17:55"},\
              { 1140,"19:00","21:20"},{1305,"21:45","23:58"} };

int main(void)
{
	FILE *fp;
	;
	fp = fopen("D:/C/TEST/test/Debug/p417t13.dat", "wb");
	int ch;



	fclose(fp);
	return 0;
}
