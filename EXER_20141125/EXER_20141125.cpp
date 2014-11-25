// EXER_20141125.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string.h>


int _tmain(int argc, _TCHAR* argv[])
{
	void xuanzepaixu();
	xuanzepaixu();
	return 0;
}

//排序字符串。
void paixu()
{
	char string[10];
	char str[3][10];
	int i;

	printf("输入3个待排序字符串:\n");
	for (i = 0; i < 3; i++)
		gets_s(str[i]);
	if (strcmp(str[0], str[1])>0)
		strcpy_s(string, str[0]);
	else strcpy_s(string, str[1]);
	if (strcmp(str[2], string)>0)
		strcpy_s(string, str[2]);
	printf("最大的串是：%s\n", string);
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

	//下面进行‘选择排序’:先选出最小的，再选出次小的,再选择第三小的依次与待排序位交换.....
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