#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct per
{
	char name[20];
	char sex[5];
	int age;
	double weight;
	int high;
	char tel[12];
}p1;

struct stu
{
	struct per p1;
	int score;
	float average;
}p;

void print(struct stu* p2)
{
	//printf("姓名:%s  性别:%s  年龄:%d岁  体重:%.2lf  身高:%dcm  电话:%s\n", p1->name, p1->sex, p1->age, p1->weight, p1->high, p1->tel);
	printf("姓名:%s  性别:%s  年龄:%d岁  体重:%.2lf  身高:%dcm  电话:%s  分数:%d  平均成绩:%.2f\n", p2->p1.name, p2->p1.sex, p2->p1.age, p2->p1.weight, p2->p1.high, p2->p1.tel, p2->score, p2->average);
}

int main()
{
	struct per p1 = { "张三", "男", 18, 70.65, 180, "13554658546" };//p1是结构体变量,初始化
	struct stu p = { {"lisi","nv",18,50.2,166,"135546958745"},100,88.6f };
	print(&p);
	//print(&p1);
	return 0;
}