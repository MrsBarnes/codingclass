//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d", &k);
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	char a, b, c;
//	printf("문자 두 개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자 출력 : %c%c%c\n", a, b, c);
//	return 0;
//}

// 원의 넓이:반지름x반지름x3.14 원의 길이:3.14x2x반지름

//#include <stdio.h>
//int main() {
//	int r;
//	printf("반지름의 길이를 입력 : ");
//	scanf("%d", &r);
//	float area;
//	float pie;
//	float length;
//	pie = 3.14;
//	area = pie * r * r;
//	length = pie * 2 * r;
//	printf("원의 넓이는 : %.2f\n",area);
//	printf("원의 길이는 : %.2f\n", length);
//	return 0;
//}

// 사다리꼴의 넓이: (윗변+아랫변)x높이/2
//#include <stdio.h>
//int main() {
//	int W1;
//	int W2;
//	float H;
//	float area;
//	printf("밑면, 길이, 높이를 입력 : ");
//	scanf("%d %d %f", &W1, &W2, &H);
//	area = (W1 + W2) * H / 2;
//	printf("사다리꼴의 넓이는 : %.2f\n", area);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2; printf("%2d\n", number);
//	number--; printf("%2d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a;
//	int b;
//	printf("변수 a,b의 값을 입력 : ");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d = number1%%4\n", number1 % 4);
//	printf("%d = number2%%3\n", number2 % 3);
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d",&a);
//	int nameoji;
//	nameoji = a%50;
//	printf("%d",nameoji);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int data1 = 6 / 2;
//	printf("%d = 6/2\n",data1);
//	int data2 = 6 / 3;
//	printf("%d = 6/3\n",data2);
//	int data3 = 6 / 4;
//	printf("%d = 6/4\n", data3);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d = ", number1/number2);
//	printf("%d/%d\n", number1, number2);
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개\n", coin10000);
//	printf("오천원권 %d개\n", coin5000);
//	printf("천원권 %d개,\n", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//
//	int jelly;
//	printf("젤리 가격을 원 단위로 입력해주세요 : ");
//	scanf("%d", &jelly);
//	int money;
//	money = 1000 - jelly;
//
//	int money500 = money / 500;
//	money = money % 500;
//	int money100 = money / 100;
//	money = money % 100;
//	int money50 = money / 50;
//	money = money % 50;
//	int money10 = money / 10;
//	money = money % 10;
//	printf("거스름돈 500원짜리 %d개\n", money500);
//	printf("거스름돈 100원짜리 %d개\n", money100);
//	printf("거스름돈 50원짜리 %d개\n", money50);
//	printf("거스름돈 10원짜리 %d개\n", money10);
//
//	return 0;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d\n", nextInt);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("첫숫자 : %d\n", randInt);//0 ~ 9
//	printf("다음숫자 : %d\n", nextInt);//50 ~59
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은 ");
//	int MyMoney = (rand() % 10 + 1) * 1000;
//	printf("%d원이다.\n", MyMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 두바이 쫀득 쿠기의 가격은");
//	printf("%d원이다.", coin500 + coin100);
//	printf("나는 두쫀쿠를 살 수 있을까?");
//
//	return 0;
//}

//20260313

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15);//apple이 15면 실행
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple != 17) //apple이 17이 아니면 실행
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7)//apple이 7보다 크면 실행
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int apple = 15;
//	if (apple < 20)//apple이 20보다 적으면 실행
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if(apple)//apple이 0이 아니면 실행
//	{
//		printf("apple은 0개가 아닙니다\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)//apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10)//apple이 10이면 실행
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)//apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 900;
//	if (!apple)//apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else//if가 틀리면 (apple이 0이 아니면) 실행
//	{
//		printf("apple은 0이 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("변수 값을 입력 :");
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		printf("양수입니다.\n");
//	}
//	else if (!a)
//	{
//		printf("0입니다. \n");
//	}
//	else {
//		printf("음수입니다. \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("input 값을 입력 : ");
//	scanf("%d", &a);
//	if (a >= 10 && a <= 99) {
//		printf("input은 두 자리 숫자입니다.\n");
//	}
//	else
//	{
//		printf("input은 두 자리 숫자가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//		printf("키가 150 이상입니다. \n");
//	else if (height > 155)
//	{
//		printf("키가 155 이상입니다. \n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int y_age;
//	printf("나이를 입력하세요: ");
//	scanf("%d", &y_age);
//	if (y_age >= 15)
//	{
//		printf("15세 관람가, ");
//	}
//
//	if (y_age >= 12)
//	{
//		printf("12세 관람가, ");
//	}
//
//	printf("전체관람가");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char initial;
//	printf("문자 하나 입력 : ");
//	scanf("%c", &initial);
//	if (initial >= 'A' && initial <= 'Z') //A~Z 65~90 → 이건 10진수, 0x붙이는 건 16진수
//	{
//		printf("대문자");
//	}
//	else if (initial >= 'a' && initial <= 'z') //a~z 97~122
//	{
//		printf("소문자");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다. \n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다. \n");
//		}
//		else
//		{
//			printf("숫자 1과 숫자 2가 같습니다. \n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다. \n");
//	}
//	else if (number < answer) {
//		printf("숫자2가 숫자 1보다 큽니다. \n");
//	}
//	else {
//		printf("숫자1과 숫자2가 같습니다.");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int score = 75;
//	if (score > 90) {
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80) {
//		printf("성적은 B등급입니다. \n");
//	}
//	else if (score > 70) {
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급입니다. \n");
//	}
//	else {
//		printf("성적은 F등급입니다. \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int number = -11;
//	if (number > 0) {
//		printf("number은 양수입니다. \n");
//	}
//	else if (number < 0) {
//		printf("number은 음수입니다. \n");
//	}
//	else {
//		printf("number은 0입니다. \n");
//	}
//
//	if (number % 2 == 0)
//	{
//		printf("number은 짝수입니다. \n");
//	}
//	else
//	{
//		printf("number은 홀수입니다. \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	if (a == 'w')
//	{
//		printf("위 방향키를 입력했습니다.\n");
//	}
//	else if (a == 'a')
//	{
//		printf("좌 방향키를 입력했습니다.\n");
//	}
//	else if (a == 'd')
//	{
//		printf("우 방향키를 입력하셨습니다.\n");
//	}
//	else if (a == 's')
//	{
//		printf("아래 방향키를 입력하셨습니다. \n");
//	}
//}

#include <stdio.h>
int main()
{
	int gague;
	scanf("%d", &gague);

	if (gague >= 45 && gague <= 55)
	{
		printf("Perfect \n");
	}
	else if (gague >= 35 && gague <= 65)
	{
		printf("Excellent \n");
	}
	else{
		printf("good \n");
	}
	return 0;
}

