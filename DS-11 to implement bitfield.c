#include<stdio.h>
struct date
{
	int d:31;
	int m:12;
	int y;
};
int main()
{
	struct date x={31,12,2025};
	printf("%d %d %d",x.d,x.m,x.y);
return 0;
}
