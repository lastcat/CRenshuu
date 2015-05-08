#include <stdio.h>
char input[100];
long long int bytes;

int calcDays(int bytes){
	if(bytes > 60 * 60 * 24 * 960)
	  return bytes / (60 * 60 * 24 * 960);
	else
	  return 0;
}

int calcHours(int bytes){
	bytes %= (60 * 60　* 24 * 960);
	if(bytes > 60 * 60 * 960)
	  return bytes / (60 * 60 * 960);
	else
	  return 0;
}

int calcMinutes(int bytes){
	bytes %= (60 * 60 * 960);
	if(bytes > 60 * 960)
	  return bytes / (60 * 960);
	else
	  return 0;
}

int calcSeconds(int bytes){
	bytes %= (60 * 960);
	return bytes / 960;
}
/*
int main(){
	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d", &bytes);
	int days = calcDays(bytes);
	int hours = calcHours(bytes);
	int minutues = calcMinutes(bytes);
	int seconds = calcSeconds(bytes);
	printf("%d日%d時間%d分%d秒\n",days,hours,minutues,seconds);
}
*/
