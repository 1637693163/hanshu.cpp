	#include "stdio.h"
	#include "stdlib.h"
	#include "string.h"
	#define List 5 //ListΪ�Զ�����ֵ��������Ҫ�ı������Ϊ�����
	void listname(int l)//lָ�������� 
	{
	int i;
	char *test[l];	//�ַ����鴢���һ�е����� 
	printf("����������ÿһ�е�����:\n");
	for(i=0;i<l;i++)
	{
	test[i]=(char*)malloc(10);
	scanf("%s",test[i]);
	}
	printf("\n-------------------------------------------------------------------------\n");
	for(i=0;i<l;i++)
	{
	printf("|%-5s\x20",test[i]);
	}
	printf("\n-------------------------------------------------------------------------\n");
	}
	
	void set(int h,int test[][List])//hָ��������
	{
	int i,j;
	int set[h][List];
	for(i=0;i<h;i++)
	{
	for(j=0;j<List;j++)
	{
		set[i][j]=test[i][j];
	}
	}
	for(i=0;i<h;i++)
	{ 
	for(j=0;j<List;j++)
	{
		printf("|%-5d\x20",set[i][j]);
	}
	printf("\n-------------------------------------------------------------------------\n");
	}	
	}
	
	int main()	//������main���� 
	{
	int a[][List]={{1,2,3,4,5},{2,3,3,4,5},{3,4,3,4,5},{4,5,3,4,5},{6,7,3,4,5}}; //ʵ�ʴ����У��Լ��ݹ鸳ֵ 
	listname(List);
	set(List,a);
	return 0; 
	} 
