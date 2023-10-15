#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////描述一个学生；名字，年龄，性别，电话
////struct-结构体关键字 stu- 结构体标签  struct stu-结构体类型【相当int】
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[5];
//}stu;//typedef将struct stu 重新命名为 stu；stu是类型  //s1,s2,s3;//是三个全局的结构体变量
//int main()
//{
//	//struct stu s;//创建结构体变量【相当int s;】局部变量
//	stu s = { "张三",20,"18163745245","男" };//结构体初始化
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
//	struct T t = { "hehe",{100,'c',"hello world",3.14},arr };//嵌套结构初始化
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

////结构体传参
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void print1(stu tem)//临时创建了结构体变量tem
//{
//	printf("name: %s\n", tem.name);
//	printf("age:  %d\n", tem.age);
//	printf("tele: %s\n", tem.tele);
//	printf("sex:  %s\n", tem.sex);
//}
//void print2(stu* ps)//创建了4或8个字节的结构体指针变量
//{
//	printf("name: %s\n", ps->name);
//	printf("age:  %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex:  %s\n", ps->sex);
//}
//int main()
//{
//	stu s = { "张三",12,"111222333","男" };
//	print1(s);//传结构体
//	print2(&s);//传地址
//	return 0;
//}

////函数传参的时候，参数是需要压栈的
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

