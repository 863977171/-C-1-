#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//stdio - std 标准 i input o output
//.h - 头文件
//
//
//main - 主函数
//代码是从main函数的第一行开始执行
//main函数是程序入口 有且仅有一个

int main()
{
	//printf - 打印函数
	//库函数的使用要引用头文件
	//
	printf("hello world\n");
	return 0;//返回0表示正确返回
}


//比较旧的写法
void main(void)
{
	printf("hehe\n");
}




//printf - 输出
//scanf - 输入

int main()
{
	int a = 0;
	scanf("%d", &a);//scanf_s
	printf("%d\n", a);
	return 0;
}




int main()
{
	return 0;
}

int main(void)
{
	return 0;
}

int main(int argc, char* argv[])
{
	return 0;
}


int main()
{
	//%d 表示打印整形数字
	// \n 换行
	//sizeof  是C语言的一个操作符
	//sizeof计算的是对应类型的变量所占内存的大小
	//sizeof  计算的单位是字节
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}


int main()
{
	short age = 20;
	float weight = 55.6;//直接写出的浮点数默认类型是double  写成55.6f 声明一下是float
	char ch = 'a';//单引号引起的是字符  双引号引起的是字符串
	//一个汉字 占两个字符
	return 0;
}





int a = 100;

int main()
{
	int a = 10;//放在大括号内部的就是局部变量
	//局部变量和全局变量名字冲突时，局部优先
	printf("%d", a);//局部变量和全局变量名字冲突时，局部优先
}



int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int c = a + b;
	printf("%d\n", c);
	return 0;
}





//局部变量的作用域：自己所在的局部范围
//全局变量的作用域：整个工程

//int a = 10;
//
//void test()
//{
//	printf("%d\n", a);
//}

int main()
{

	{
		int a = 10;
	}
	printf("%d\n", a);//会报错
	return 0;
}


//一个工程中可以有多个.c文件
//但是多个.c文件只能有一个main函数


int main()
{
	{
		//a创建
		int a = 10;
		printf("%d\n", a);
		//a销毁
	}
}


int main()
{
	//100;//字面常量
	//3.15;//字面常量

	//int a = 5;//a是变量  5是常量
	////若int 有const修饰 叫做常变量 值是不可改的  
	////具有常属性，但是还是变量
	//printf("%d\n", a);//5
	//a = 20;

	//printf("%d\n", a);//20

	return 0;
}




//define 定义的标识符常量

#define MAX 100

int main()
{
	int a = MAX;
	printf("%d\n", a);
	return 0;
}


//枚举常量
//枚举-一一列举
//性别：男，女，保密

//创建一个枚举类型
//enum 是枚举关键字

enum Sex
{
	MALE,//可以对枚举常量赋予初值
	FEMALE,
	SECRET
};

int main()
{
	printf("%d\n", MALE);//现在枚举常量是不能改的
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	return 0;
}