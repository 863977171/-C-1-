#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//stdio - std ��׼ i input o output
//.h - ͷ�ļ�
//
//
//main - ������
//�����Ǵ�main�����ĵ�һ�п�ʼִ��
//main�����ǳ������ ���ҽ���һ��

int main()
{
	//printf - ��ӡ����
	//�⺯����ʹ��Ҫ����ͷ�ļ�
	//
	printf("hello world\n");
	return 0;//����0��ʾ��ȷ����
}


//�ȽϾɵ�д��
void main(void)
{
	printf("hehe\n");
}




//printf - ���
//scanf - ����

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
	//%d ��ʾ��ӡ��������
	// \n ����
	//sizeof  ��C���Ե�һ��������
	//sizeof������Ƕ�Ӧ���͵ı�����ռ�ڴ�Ĵ�С
	//sizeof  ����ĵ�λ���ֽ�
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
	float weight = 55.6;//ֱ��д���ĸ�����Ĭ��������double  д��55.6f ����һ����float
	char ch = 'a';//��������������ַ�  ˫������������ַ���
	//һ������ ռ�����ַ�
	return 0;
}





int a = 100;

int main()
{
	int a = 10;//���ڴ������ڲ��ľ��Ǿֲ�����
	//�ֲ�������ȫ�ֱ������ֳ�ͻʱ���ֲ�����
	printf("%d", a);//�ֲ�������ȫ�ֱ������ֳ�ͻʱ���ֲ�����
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





//�ֲ��������������Լ����ڵľֲ���Χ
//ȫ�ֱ�������������������

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
	printf("%d\n", a);//�ᱨ��
	return 0;
}


//һ�������п����ж��.c�ļ�
//���Ƕ��.c�ļ�ֻ����һ��main����


int main()
{
	{
		//a����
		int a = 10;
		printf("%d\n", a);
		//a����
	}
}


int main()
{
	//100;//���泣��
	//3.15;//���泣��

	//int a = 5;//a�Ǳ���  5�ǳ���
	////��int ��const���� ���������� ֵ�ǲ��ɸĵ�  
	////���г����ԣ����ǻ��Ǳ���
	//printf("%d\n", a);//5
	//a = 20;

	//printf("%d\n", a);//20

	return 0;
}




//define ����ı�ʶ������

#define MAX 100

int main()
{
	int a = MAX;
	printf("%d\n", a);
	return 0;
}


//ö�ٳ���
//ö��-һһ�о�
//�Ա��У�Ů������

//����һ��ö������
//enum ��ö�ٹؼ���

enum Sex
{
	MALE,//���Զ�ö�ٳ��������ֵ
	FEMALE,
	SECRET
};

int main()
{
	printf("%d\n", MALE);//����ö�ٳ����ǲ��ܸĵ�
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	return 0;
}