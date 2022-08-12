#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////三个数的最大值
//int MAX(int a, int b, int c) {
//
//	int e = 0;
//	if (a > b && a > c) {
//		e = a;
//	}
//	else if (b > a && b > c) {
//		e = b;
//	}
//	else if (c > a && c > b) {
//		e = c;
//	}
//	return e;
//}
////三个数的中间值
//int MID(int a, int b, int c) {
//	int e = 0;
//	if (a > b && b > c) {
//		e = b;
//	}
//	else if (a > c && c > b) {
//		e = c;
//	}
//	else if (b > a && a > c) {
//		e = a;
//	}
//	else if (b > c && c > a) {
//		e = c;
//	}
//	else if (c > b && b > a) {
//		e = b;
//	}
//	else if (c > a && a > b) {
//		e = a;
//	}	
//	return e;
//}
////三个数的最小值
//int MIN(int a, int b, int c) {
//	int e = 0;
//	if (a < b && a < c) {
//		e = a;
//	}
//	else if (b < a && b < c) {
//		e = b;
//	}
//	else if (c < a && c < b) {
//		e = c;
//	}
//	return e;
//}
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d %d %d\n", MAX(a, b, c), MID(a, b, c),MIN(a, b, c));
//	return 0;
//}



//1到100之间3的倍数
//int main() {
//	int a = 0;
//	for (a = 1; a <= 100; a ++) {
//		if (a % 3 == 0) {
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
//int main() {
//	int a = 0;
//	while (a <= 100) {
//		a++;
//		if (a % 3 == 0) {
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}


//打印100~200之间的素数
//#include<math.h>
//int main() {
//	int c;
//	int a = 0;
//	int b = sqrt(c);
//	for (a = 100; a <= 200; a++) {
//		//判断是否为素数
//		if (a % b == 0) {
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}


//打印1000到2000之间的闰年
//判断（1）能被4整除，但不能被100整除（2）能被400整除

//int main() {
//	int a = 0;
//	int conut = 0;
//	for (a = 1000; a <= 2000; a++) {
//		if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
//			printf("%d ", a);
//			conut++;
//		}
//	}
//	printf("\nconut=%d", conut);
//	return 0;
//}



//十个整数之间的最大值

//int main() {
//	int a = 10, b = 12, c = 13, d = 27, e = 22, f = 78, g = 68, h = 96, l = 84, j = 49;
//	//printf("%d %d %d %d %d %d %d %d %d %d ", a, b, c, d, e, f, g, h, l, j);
//
//	while (1) {
//		int tmp = 0;
//		if (a > b) {
//			tmp = a;
//		}
//	}
//
//	return 0;
//}




//分数求和

//int main() {
//	int a = 1;//分母
//	int b = 1;//分子
//	int c = 1;
//	while (a <= 100) {
//		c += b / a++;
//		c -= b / a--;
//	}
//	printf("%lf",(double) c);
//
//
//	return 0;
//}


//判断大小
//int main() {
//	int a = 0;
//	int b = 0;
//	//							  读到两个整数
//	while (	scanf("%d %d", &a, &b)==2) {
//		if (a == b) {
//			printf("%d=%d\n", a, b);
//		}
//		else if (a > b) {
//			printf("%d>%d\n", a, b);
//		}
//		else {
//			printf("%d<%d\n", a, b);
//		}
//	}
//	return 0;
//}





////反向输四位数
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	while (a) {
//		printf("%d", a % 10);
//		a = a / 10;
//	}
//	return 0;
//}

//小数点保留2位
//int main() {
//	float a = 0, b = 0, c = 0;
//	scanf("%f %f %f", &a, &b, &c);
//	//总
//	printf("%.2f %.2f", a + b + c,(a+b+c)/3);
//	return 0;
//}
//用for循环写


//int main() {
//    int a = 0;
//    double c = 0;
//    for (a = 1; a <= 5; a++) {
//        float b = 0;
//        scanf("%f", &b);
//        c = c + b;
//    }
//    printf("%.2f", c / 5);
//
//    return 0;
//}


//int main() {
//	int a = 0;
//	while (scanf("%d", &a) != EOF) //读到一个数字
//	{
//		int b = 0;
//		for (b = 1; b <= a; b++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}