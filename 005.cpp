#define a 95
#define b 90
#define c 92 
#include <stdio.h>
int main()
{
	printf("语文成绩；%d\n数学成绩：%d\n英语成绩：%d\n",a,b,c);
	if(a>=90 && b>=90 && c>=90)
		printf("此子前途无量！"); 
	return 0;
}

//凡是以 # 开头的均为预处理指令，预处理又叫预编译。预编译不是编译，而是编译前的处理。这个操作是在正式编译之前由系统自动完成的。
