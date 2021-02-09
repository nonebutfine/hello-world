#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,s,area;
	printf("输入三角形的边长a,b,c：");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	/* 函数sqrt()用来计算一个非负数的平方根,使用这个函数，需要在源程序中增加"#include<math.h>" */
	printf("area=%.2f\n",area);
}
//20210209
