/*
* Copyright (c) 2017 so项目组
* 项目名称：SO木马
* 文件名：main.c
* 功能描述：一个基于C/S的简单远程控制项目
* 其它文件：略
* 作者QQ：2782905752
* 修改日期：2017.3.7
* 当前版本：1.1
* 完成日期：2017.3.2
* 取代版本：1.0
*/

#include "std.h"

int main(int argc, char *argv[])
{
	if (argc < 1){
		fprintf(stderr, "usage: %s\n", argv[0]);
		exit(1);
	}
	printf("Hello world\n");
	
	return 0;
}