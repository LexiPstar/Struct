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
	//printf("����:%s  �Ա�:%s  ����:%d��  ����:%.2lf  ���:%dcm  �绰:%s\n", p1->name, p1->sex, p1->age, p1->weight, p1->high, p1->tel);
	printf("����:%s  �Ա�:%s  ����:%d��  ����:%.2lf  ���:%dcm  �绰:%s  ����:%d  ƽ���ɼ�:%.2f\n", p2->p1.name, p2->p1.sex, p2->p1.age, p2->p1.weight, p2->p1.high, p2->p1.tel, p2->score, p2->average);
}

int main()
{
	struct per p1 = { "����", "��", 18, 70.65, 180, "13554658546" };//p1�ǽṹ�����,��ʼ��
	struct stu p = { {"lisi","nv",18,50.2,166,"135546958745"},100,88.6f };
	print(&p);
	//print(&p1);
	return 0;
}