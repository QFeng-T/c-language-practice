#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

//int main() {
//
//	int number1, number2, sum;
//	number1 = 10;
//	number2 = 20;
//	
//	//输入两个整数并计算它们的和
//	scanf("%d %d", &number1, &number2);
//	
//	//求两个整数的和
//	sum = number1 + number2;
//
//	//输出结果
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//int main() {
//	
//	int a = 10;
//	{
//	
//		printf("a=%d",&a);
//	
//	}
//
//	printf("a=%d", &a);
//}

//int a = 10;
//void test() {
//
//	printf("test-->%d\n", a);
//}
//
//int main() {
//
//	test(); {
//	
//		printf("a=%d\n", a);
//	}
//
//	printf("a=%d\n", a);
//
//	return 0;
//}

////声明外部变量
//
//extern char a;
//
//void test() {
//
//	printf("test-->%d\n", a);
//}
//
//int main() {
//
//	test(); {
//
//		printf("a=%d\n", a+1);
//	}
//
//	printf("a=%d\n", a);
//
//	return 0;
//}
//int main() {
//
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//}
//int c = 100;
//
//int main() {
//
//	const char* a = "三百";
//	printf("%s\n", a);
//
//	return 0;
//
//
//}
//
//int main() {
//
//	char arr1[] = "a bcdef\0g";
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', ' ',' ',' ',' ', 'c', '\0' };
//	char arr3[] = { 'a', 'b', 'c', 'd', 'e', 'f', };
//
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%d\n", strlen(arr3));
//
//	return 0;
//}
//int main() {
//
//	char input[10] = {'0'};
//	printf("你是好人吗？");
//
//	scanf("%s", input);
//
//	if (strcmp(input, "是") == 0)
//	{
//		printf("你人真好！你该被枪指着\n");
//
//	}
//	else if (strcmp(input, "不是") == 0)
//	{
//
//		printf("你人真坏！你被奖励一把枪\n");
//
//	}
//	else 
//	{
//		printf("本该如此。\n");
//	}
//
//	return 0;
//}
 
 //测试练习return
//
//void main() {
//	int a = 10;
//	if (a == 10) {
//		printf("a等于0\n");
//		return ;
//	
//	}
//	printf("a不等于0\n");
//}
// 
//void main() {
//    int n = 1;
//    if (n == 11) {
//        printf("执行if\n");
//        return; // 终止函数，后面代码全不执行
//    }
//    printf("函数还在运行\n"); // 这行永远不会执行！
//}
// 

 
//通过函数判断你俩的缘分

int calculation(int a, int b) {
	if (a > b) {
		return 0;
	}
	else if (a < b) {
		return 1;
	}
	else {
		return 2;
	}
	printf("测试语句\n");
	return 0;
}

	
int main() {

	
	int a = 0;
	int b = 0;
	
	//输入你俩的幸运数字
	printf("请输入你俩的幸运数字（空格隔开）：");
	//判断你能不能走到最后
	//输入你俩的幸运数字
	if (scanf("%d %d", &a, &b) != 2) {
		
		printf("输入错误！\n");
		return 1;
	}

	//拿到数字、判断能不能走到最后

	int result = calculation(a, b);

	//printf("\n", result);
	//使用swtich输出结果
	switch (result)
	{
	case 1:
		printf("你俩天作之合，是一辈子的家人！\n");
		break;
		
	case 2:
		printf("你们是上辈子的缘分，到这一世来续前世的恋，直至永远!\n");
		break;
	default:
		printf("双向奔赴，遇见即使上上签，你们是彼此最好的安排！\n");
		break;
	}
	return 0;
}