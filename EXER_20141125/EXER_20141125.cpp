// EXER_20141125.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string.h>


int _tmain(int argc, _TCHAR* argv[])
{
	void xuanzepaixu();
	xuanzepaixu();
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