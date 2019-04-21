	#include "stdio.h"
	#include "stdlib.h"
	#include "string.h"
	#define List 5 //List为自订列数值，你所需要的表格列数为几就填几
	void listname(int l)//l指数组列数 
	{
	int i;
	char *test[l];	//字符数组储存第一行的列名 
	printf("请依序输入每一列的列名:\n");
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
	
	void set(int h,int test[][List])//h指数组行数
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
	
	int main()	//测试用main函数 
	{
	int a[][List]={{1,2,3,4,5},{2,3,3,4,5},{3,4,3,4,5},{4,5,3,4,5},{6,7,3,4,5}}; //实际代码中，自己递归赋值 
	listname(List);
	set(List,a);
	return 0; 
	} 
