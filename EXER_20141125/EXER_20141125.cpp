// EXER_20141125.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string.h>


int _tmain(int argc, _TCHAR* argv[])
{
	void lianjie();
	lianjie();
	return 0;
}

//�����ַ�����
void paixu()
{
	char string[10];
	char str[3][10];
	int i;

	printf("����3���������ַ���:\n");
	for (i = 0; i < 3; i++)
		gets_s(str[i]);
	if (strcmp(str[0], str[1])>0)
		strcpy_s(string, str[0]);
	else strcpy_s(string, str[1]);
	if (strcmp(str[2], string)>0)
		strcpy_s(string, str[2]);
	printf("���Ĵ��ǣ�%s\n", string);
}

//��ѡ������
void xuanzepaixu()
{
	int a[10];
	int i, j,temp;

	for (i=0; i<10; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d",&a[i]);
	}

	//������С�ѡ������:��ѡ����С�ģ���ѡ����С��,��ѡ�����С�������������λ����.....
	for (i=0; i<10; i++)
		for (j=i+1; j<10 ;j++)
		if (a[j] < a[i])
		{	
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		
	for (i = 0; i<10; i++)
		printf("%d ", a[i]);
}

//���������ַ���
void lianjie()
{
	char str1[30], str2[10];
	int i,end;

	printf("���������ַ�����\n");
	printf("str1=");
	gets_s(str1);
	printf("str2=");
	gets_s(str2);

	//�ҳ�ĩβ
	for (i = 0; i < 30; i++)
	{
		if (str1[i] == '\0'){
			end = i;
			break;
		}
	}
	for (i = 0; str2[i] != '\0'; i++)
		str1[end + i] = str2[i];

	printf("��str2�ӵ�str1��ĩβ��\n");
	puts(str1);

}