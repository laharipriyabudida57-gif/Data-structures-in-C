#include<stdio.h>
#include<string.h>
struct student
{
	char name [50];
	int marks;
};
int main()
{
	struct student student1,student2;
	strcpy(student1.name,"Laharipriya");
	student1.marks=80;
	student2=student1;
	printf("name:%s,\n marks:%d",student2.name,student2.marks);
	return 0;
}

