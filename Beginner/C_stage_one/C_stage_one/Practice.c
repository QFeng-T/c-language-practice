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
//关于数组的测试
//int main() {
//
//	//char arr1[] = "a bcdef\0g";
//	//char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', ' ',' ',' ',' ', 'c', '\0' };
//	//char arr3[] = { 'a', 'b', 'c', 'd', 'e', 'f', };
//	/*int arr4[10] = {'\0'};
//
//	printf("%d\n", strlen(arr4));
//	printf("%d\n", sizeof(arr4));*/
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%s\n", strlen(arr3));
//	printf("%s\n", sizeof(arr3));*/
//
//
//	int arr1[] = { 'a', 'b', '\0'};
//	char arr2[] = "a bcdef\0";
//	printf("%d\n", strlen(arr1));
//	printf("%s\n", arr2);
//	printf("%d\n", sizeof(arr2));
//
//	//printf("%d\n", strlen(arr2));
//
//
//
//	return 0;
//}
////int main() {
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

 
////通过函数判断你俩的缘分
//
//int calculation(int a, int b) {
//	if (a > b) {
//		return 0;
//	}
//	else if (a < b) {
//		return 1;
//	}
//	else {
//		return 2;
//	}
//	printf("测试语句\n");
//	return 0;
//}
//
//	
//int main() {
//
//	
//	int a = 0;
//	int b = 0;
//	
//	//输入你俩的幸运数字
//	printf("请输入你俩的幸运数字（空格隔开）：");
//	//判断你能不能走到最后
//	//输入你俩的幸运数字
//	if (scanf("%d %d", &a, &b) != 2) {
//		
//		printf("输入错误！\n");
//		return 1;
//	}
//
//	//拿到数字、判断能不能走到最后
//
//	int result = calculation(a, b);
//
//	//printf("\n", result);
//	//使用swtich输出结果
//	switch (result)
//	{
//	case 1:
//		printf("你俩天作之合，是一辈子的家人！\n");
//		break;
//		
//	case 2:
//		printf("你们是上辈子的缘分，到这一世来续前世的恋，直至永远!\n");
//		break;
//	default:
//		printf("双向奔赴，遇见即使上上签，你们是彼此最好的安排！\n");
//		break;
//	}
//	return 0;
//}

////计算（-8+22）*a-10+c/2计算后的结果，为一个整数
//int main() {
//	int a = 0;
//	int c = 0;
//
//	//计算（-8+22）*a-10+c/2计算后的结果，为一个整数
//	printf("计算（-8+22）*a-10+c/2计算后的结果，为一个整数\n");
//	//输入a和c的值
//	printf("请输入a和c的值（空格隔开）：");
//	scanf("%d %d", &a, &c);
//	//计算结果
//	int sum = 0;
//	sum = (-8 + 22)* a - 10 + c / 2;
//
//	//输出结果
//
//	printf("计算结果为：%d\n", sum);
//}

//对数组的测试
//int main() {
//
//	int arr[] = { 0 };
//	int arr2[10] = { 0 };
//	
//	//分别放一个数到1下标的位置，看能否访问到这个数
//	//arr[1] = 10;
//
//	//运行失败，访问了非法内存地址，导致程序崩溃
//	arr[0] = 10;
//	/*printf("%d\n", arr[1]);*/
//	//运行成功，访问了合法内存地址，虽然这个地址没有被我们初始化过，但它是可以访问的
//	printf("%d\n", arr[0]);
//	arr2[1] = 20;
//	printf("%d\n", arr2[1]);
//	//数组初始化时，没有定义数组大小，只放了一个元素，数组大小默认为1，所以访问arr[1]就是访问了非法内存地址，导致程序崩溃
//	// 如果定义了数组大小，数组大小为10，访问arr2[1]就是访问了合法内存地址，虽然这个地址没有被我们初始化过，但它是可以访问的
//	
//	//没有写return语句，main函数默认返回0
//}

//测试字符串长度
//int main() {
//
//	printf("%zd\n", strlen("\\0114514\\n"));
//	printf("%zu\n", strlen("\\0114514\\n"));
//
//
//	return 0;
//
//
//	//%zu和%zd都是用来输出size_t类型的变量的格式说明符，size_t是一个无符号整数类型，通常用于表示对象的大小或数组的索引。
//	// %zu是C99标准引入的格式说明符，而%zd是C11标准引入的格式说明符。两者在大多数情况下是等价的，但%zu更常用一些。
//	//想要输出\n或者\t等转义字符的长度，可以通过在转义字符前面加上一个反斜杠来实现，例如：strlen("\\n")会返回2，因为它包含了两个字符：反斜杠和n。
//	// 同样，strlen("\\t")也会返回2，因为它包含了反斜杠和t。
//
//}