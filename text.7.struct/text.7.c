#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����һ��ѧ�������֣����䣬�Ա𣬵绰
////struct-�ṹ��ؼ��� stu- �ṹ���ǩ  struct stu-�ṹ�����͡��൱int��
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[5];
//}stu;//typedef��struct stu ��������Ϊ stu��stu������  //s1,s2,s3;//������ȫ�ֵĽṹ�����
//int main()
//{
//	//struct stu s;//�����ṹ��������൱int s;���ֲ�����
//	stu s = { "����",20,"18163745245","��" };//�ṹ���ʼ��
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'c',"hello world",3.14},arr };//Ƕ�׽ṹ��ʼ��
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

////�ṹ�崫��
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void print1(stu tem)//��ʱ�����˽ṹ�����tem
//{
//	printf("name: %s\n", tem.name);
//	printf("age:  %d\n", tem.age);
//	printf("tele: %s\n", tem.tele);
//	printf("sex:  %s\n", tem.sex);
//}
//void print2(stu* ps)//������4��8���ֽڵĽṹ��ָ�����
//{
//	printf("name: %s\n", ps->name);
//	printf("age:  %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex:  %s\n", ps->sex);
//}
//int main()
//{
//	stu s = { "����",12,"111222333","��" };
//	print1(s);//���ṹ��
//	print2(&s);//����ַ
//	return 0;
//}

////�������ε�ʱ�򣬲�������Ҫѹջ��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}

