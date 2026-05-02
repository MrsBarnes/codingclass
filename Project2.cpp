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

//#include <stdio.h>
//int main()
//{
//	int gague;
//	scanf("%d", &gague);
//
//	if (gague >= 45 && gague <= 55)
//	{
//		printf("Perfect \n");
//	}
//	else if (gague >= 35 && gague <= 65)
//	{
//		printf("Excellent \n");
//	}
//	else{
//		printf("good \n");
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int input;
//	scanf("%d", &input);
//
//	if (input % 3 == 0) {
//		if (input % 6 == 0) { printf("input은 6의 배수입니다. \n"); }
//		if (input % 9 == 0) { printf("input은 9의 배수입니다. \n"); }
//		printf("input은 3의 배수입니다. \n");
//	}return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int input;
//	scanf("%d", &input);
//
//	if (input % 3 == 0) {
//		printf("input은 3의 배수입니다. \n");
//		if (input % 6 == 0) { printf("input은 6의 배수입니다. \n"); }
//		if (input % 9 == 0) { printf("input은 9의 배수입니다. \n"); }
//		printf("\t");
//	}return 0;
//}


//#include <stdio.h>
//int main() {
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈 \n");
//	}return 0;
//}

//#include <stdio.h>
//int main() {
//	char command = 'm';
//	switch (command)
//	{
//	case 'i':printf("아이템창 오픈\n");
//	case 'm':printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	char command ='m';
//	switch (command)
//	{
//	case'i':printf("아이템창 오픈\n");
//		break;
//	case'm':printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	char command;
//	printf("커맨드를 입력하세요:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break;
//	case 'm': printf("지도창 오픈\n");
//		break;
//	default:printf("지정된 기능이 없습니다.\n");
//	}return 0;
//}

//#include <stdio.h>
//int main() {
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int number1, number2;
//	char oper;
//
//	scanf("%d", &number1);
//	scanf(" %c", &oper);
//	scanf("%d", &number2);
//	
//	switch (oper) {
//	case '+':
//		int result = number1 + number2;
//		printf("%d %c %d = %d", number1, oper, number2, result);
//		break;
//	case '-':printf("%d - %d = %d", number1, number2, number1 - number2);
//		break;
//	case '*': printf("%d * %d = %d", number1, number2, number1 * number2);
//		break;
//	case '/':printf("%d / %d =%d", number1, number2, number1 / number2);
//		break;
//	case '%':printf("%d %% %d =%d", number1, number2, number1 % number2);
//		break;
//	default:printf("잘못된 연산기호를 입력하셨습니다.\n");
//	}return 0;
//}

//#include <stdio.h>
//int main() {
//	int month;
//	printf("1부터 12 중 임의의 숫자를 하나 입력하세요.\n");
//	scanf("%d", &month);
//
//	switch (month) {
//	case 1:printf("January");
//		break;
//	case 2:printf("February");
//		break;
//	case 3:printf("March");
//		break;
//	case 4: printf("April");
//		break;
//	case 5:printf("May");
//		break;
//	case 6: printf("June");
//		break;
//	case 7: printf("July");
//		break;
//	case 8:printf("August");
//		break;
//	case 9: printf("September");
//		break;
//	case 10: printf("Octonber");
//		break;
//	case 11: printf("November");
//		break;
//	case 12: printf("December");
//		break;
//	default: printf("잘못된 숫자를 입력하였습니다. \n");
//	} return 0;
//}

//#include <stdio.h>
//int main() {
//	char command;
//
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동 \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("왼쪽으로 이동합니다. \n");
//		break;
//	case '>': case 'd':
//		printf("오른쪽으로 이동합니다. \n");
//		break;
//	}return 0;
//}

//#include <stdio.h>
//int main() {
//	int number;
//	const int  option = 3;
//	printf("메뉴를 선택하세요 \t");
//	printf("1. 새 게임 2.이어하기 3. 옵션\n");
//	scanf("%d", &number);
//	
//
//	switch (number)
//	{
//	case 1: 
//		printf("새 게임 시작. \n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option:
//		printf("옵션세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("0~9사이의 숫자를 입력하세요\n");
//	scanf("%d", &number);
//
//	switch (number) {
//	case 3: case 6: case 9:
//		printf("짝");
//		break;
//	default:printf("\n");
//	}return 0;
//}

//#include <stdio.h>
//int main() {
//	char command = 'x';
//	switch (command) {
//	case 'x':printf("알파벳x입력\n");
//		break;
//	case 'X':printf("엑스표 입력\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1,number2,number1 + number2);
//		break;
//	case 2:
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}return 0;
//}

//#include <stdio.h>
//int main() {
//	int i_menu;
//	printf("1.더하기 2.빼기 \n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//	{
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d+%d =%d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2:
//	{
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요. \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	}return 0;
//}

//#include <stdio.h>
//int main() {
//	char key;
//	printf("알파벳을 입력하세요 : \n");
//	scanf("%c",&key);
//	
//	switch (key)
//	{
//	case 'w': printf("위 방향키를 입력하셨습니다. \n");
//		break;
//	case 'a': printf("아래 방향키를 입력하셨습니다. \n");
//		break;
//	case 'd': printf("우 방향키를 입력하셨습니다. \n");
//		break;
//	case 's': printf("아래 방향키를 입력하셨습니다. \n");
//		break;
//	default: printf("잘못된 알파벳을 입력하였습니다. \n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int appetizer, mainDish, dessert;
//	printf("애피타이저를 골라주세요.\t 1.캐비어 2.샐러드 3.푸아그라 \n");
//	scanf("%d", &appetizer);
//	printf("메인디시를 골라주세요.\t 1.스테이크 2.생선요리 3.양갈비\n");
//	scanf("%d", &mainDish);
//	printf("디저트를 골라주세요.\t 1. 케이크 2.아이스크림 3.초콜릿무스\n");
//	scanf("%d", &dessert);
//	
//	printf("\n주문한 음식은 ");
//	switch (appetizer)
//	{
//	case 1:printf("캐비어,");
//		break;
//	case 2: printf("샐러드,");
//		break;
//	case 3:printf("푸아그라,");
//		break;
//	}
//
//	switch (mainDish)
//	{
//	case 1: printf("스테이크,");
//		break;
//	case 2: printf("생선요리,");
//		break;
//	case 3: printf("양갈비,");
//	}
//
//	switch (dessert)
//	{
//	case 1:printf("케이크");
//		break;
//	case 2: printf("아이스크림");
//		break;
//	case 3: printf("초콜릿무스");
//		break;
//	}
//
//	printf("입니다.");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x)", i, i);
//		
//		if (i > 70 && i < 80) { i++; continue; }
//		if (i % 10 == 9)printf("\n");
//		if (i == 93) break;
//		i++;
//	}
//}

//#include <stdio.h>
//int main() {
//	while (0)
//	{
//		printf("조건이 참일 경우 반복 출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복 출력\n");
//	}return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 0;
//
//	while (count < 3)
//	{
//		printf("현재 count:%d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}return 0;
//}

//#include <stdio.h>
//int main() {
//	int count = 3;
//	while (count > 0)
//	{
//		printf("현재 count: %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int number = 0;
//	while (number < 6)
//	{
//		printf("C");
//		number++;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a = -10;
//	while (a <= 0)
//	{
//		printf("%d\n", a);
//		a++;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a = 0;
//	while (a <= 100)
//	{
//		if(a%5==0)
//		{
//			printf("%d\n", a);
//			
//		}
//		a++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a = 0;
//	while (a <= 100)
//	{
//		printf("%d\n", a);
//		a+=5;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count : %d\n",count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	char alphabet;
//	while (1) {
//		printf("알파벳을 입력해주세요(다른 것 입력 시 다시 입력):");
//		scanf("%c", &alphabet);
//		if(alphabet >= 'a' && alphabet <='z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if(alphabet >='A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다\n");
//		}
//		else { continue; }
//		printf("입력한 값: %c\n", alphabet);
//	}
//}

//#include <stdio.h>
//int main() {
//	int number, total = 0;
//	while (1) {
//		printf("양수를 입력해주세요(0 입력 시 종료)");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//
//		total = total + number;
//		printf("%d\n",total);
//	}
// return 0;
//}

//#include <stdio.h>
//int main() {
//	int number = 1, multi = 1;
//	while (1) {
//		multi = number * multi;
//		if (multi >= 50000) { break; }
//		number++;
//	}
//	printf("%d\n", number);
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	
//	char alphabet;
//	alphabet = 'A';
//
//	/*while (alphabet <= 'Z') {
//		if (alphabet != 'F') {
//			printf("%c", alphabet);
//		}
//		alphabet++;
//	}*/
//	while (alphabet <= 'Z') {
//		if (alphabet == 'F') {
//			alphabet++;
//			continue;
//		}
//		printf("%c", alphabet);
//		alphabet++;
//	}
//
//	return 0;
//}
// 
//#include <stdio.h>
//int main() {
//	int number = 0 , total = 0, player = 0;
//	printf("1~3 중 숫자 하나를 입력하세요\n");
//	while (1) {
//		printf("A : ");
//		scanf("%d", &number);
//				
//		total = number + total;
//		printf("=> %d\n", total);		
//		if (total >= 31) { printf("A가 졌습니다!"); break; }
//	}
//
//	return 0;
//}
// 
//player변수가 0:A / 1:B
//#include <stdio.h>
//int main() {
//	int number = 0, total = 0, player = 0;
//	printf("1~3 중 숫자 하나를 입력하세요\n");
//	while (1)
//	{
//		//if (player == 0) {
//		//	printf("%c : ",'A'+0);
//		//}
//		//else {
//		//	printf("%c : ",'A'+1);
//		//}
//
//		printf("%c : ", 'A' + player);
//		scanf("%d", &number);
//
//		if (number >3 || number <1) {
//			printf("1~3 사이의 숫자를 입력해주세요\n");
//			continue;
//		}
//
//		total += number;
//
//		
//		printf("=> %d\n", total);
//
//		if (total >= 31) {
//			break;
//		}
//
//		//if (player == 0)
//		//	player = 1;
//		//else
//		//	player = 0;
//
//		player = !player;
//	}
//
//
//	//if (player == 0) { printf("A가 졌습니다!"); }
//	//else { printf("B가 졌습니다!"); }
//
//	printf("%c가 졌습니다!", 'A' + player);
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int tem = 20;
//	do
//	{
//		printf("현재 온도 : %d도\n", tem);
//	} while (tem > 28);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n메뉴를 선택하세요. \n");
//		printf("1.새 게임 2. 이어하기 3.옵션 (0: 게임 종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//		printf("게임을 종료합니다. \n");
//		return 0;
//}

//#include <stdio.h>
//int main() {
//	int select;
//	do {
//		printf("번호를 선택하세요.\n");
//		printf("1.로그인 2.회원가입 3.옵션 4.만든사람들\n");
//		scanf("%d", &select);		
//		if (select == 1) { printf("로그인하세요.\n"); }
//		if (select == 2) { printf("회원가입하세요.\n"); }
//		if (select == 3) { printf("옵션 세팅\n"); }
//		if (select == 4) { printf("목록보기\n"); }
//	}while(select <= 4 && select >= 1);
//	printf("종료합니다.\n");
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int mung = 0;
//	int youtube = 0;
//
//	do {
//		printf("\n%d번째 날! \n", ++day);
//		printf("오늘도 코딩할까요?\n");
//		printf("1.공부한다.\n");
//		printf("2.멍때린다.\n");
//		printf("3.공부하는 척하면서 몰래 유튜브 본다.\n");
//		printf("그 외. 끝낸다.\n>>");
//		scanf("%d", &command);
//
//		//if (command != 1) break;
//		if (command == 1) {
//			int randInt = rand() % 5 + 1;
//
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서. ");
//				break;
//			case 2:
//				printf("기분이 나빠요. \n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5:
//				printf("학원에서 ");
//				break;
//			}
//			printf("코딩 공부합니다.\n");
//			study++;
//		}
//
//		else if (command == 2) {
//			int randInt = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋지도 나쁘지도 않아요.\n");
//			case 3:
//				printf("길거리에서. ");
//				break;
//			case 2:
//				printf("기분이 멍해요. \n");
//			case 4:
//				printf("차 안에서 ");
//				break;
//			case 5:
//				printf("학교에서 ");
//				break;
//			}
//			printf("멍때립니다.\n");
//			mung++;
//		}
//		else if (command == 3) {
//			int randInt = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("딴짓하고 싶은 기분이에요.\n");
//			case 3:
//				printf("직장에서. ");
//				break;
//			case 2:
//				printf("유튜브를 보고 싶은 기분이에요. \n");
//			case 4:
//				printf("집에서 ");
//				break;
//			case 5:
//				printf("스터디카페에서 ");
//				break;
//			}
//			printf("공부하는 척하면서 몰래 유튜브를 봅니다.\n");
//			youtube++;
//		}
//		else break;
//	} while (1);
//
//	if (day <= 3) {
//		printf("그대로입니다...\n");
//	}
//	else if (study > mung && study > youtube) {
//		int level = study / 8;
//		switch (level) {
//		case 0:
//			printf("코딩 새싹이 되었습니다!\n");
//			break;
//		case 1:
//			printf("프로그래머가 되었습니다!\n");
//			break;
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다!\n");
//			break;
//		case 3:
//			printf("BackEnd 개발자가 되었습니다!\n");
//			break;
//		default:
//			printf("풀스택 개발자가 되었습니다!\n");
//			break;
//		}
//	}
//	else if (mung > study && mung > youtube) {
//		int level = mung / 4;
//		switch (level) {
//		case 0:
//			printf("멍때리기 대회 우승자가 되었습니다!\n");
//			break;
//		case 1:
//			printf("너무 멍때려서 멍멍이로 오인받게 되었습니다!\n");
//			break;
//		default:
//			printf("그냥 멍때리는 사람이 되었습니다!\n");
//			break;
//		}
//	}
//	else if (youtube > study && youtube > mung) {
//		int level = youtube / 4;
//		switch (level) {
//		case 0:
//			printf("딴짓하기 달인이 되었습니다!\n");
//			break;
//		case 1:
//			printf("유튜버가 되었습니다! 순식간에 구독자가 늘어나 실버 버튼을 받게 되었습니다!\n");
//			break;
//		default:
//			printf("그냥 유튜브 보는 사람이 되었습니다!\n");
//			break;
//		}
//	}
//	return 0;
//
//}

//#include <stdio.h>
//int main() {
//	int sheep;
//	for (sheep = 1; sheep < 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int sheep;
//	for (sheep = 1; sheep < 5; sheep++)
//	{
//		printf("양 %d마리\n",sheep);
//		if (sheep == 3) {
//			printf("도중에 잠들었다! \n");
//			break;
//		}
//	}return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if(sheep==3){
//		printf("졸아서 양을 세지 못했다! \n");
//		continue;
//	}
//	printf("양%d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("깜빡 졸았다! \n");
//		}
//		if (sheep == 45) { 
//			printf("잠들었다!");	break;
//		}
//		printf("양%d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드%d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int round;
//	for (round = 1; round <= 10; round++)
//	{
//		printf("라운드%d\n", round);
//	}return 0;
//}

//#include <stdio.h>
//int main() {
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트%d동\n", count);
//	}return 0;
//}

//#include <stdio.h>
//int main() {
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("도합%d\n", sum_number);
//return 0;
//}

//#include <stdio.h>
//int main() {
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요 : ");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int number;
//	for (number = 10; number <= 99; number++)
//	{
//		printf("%d\n", number);
//	}return 0;
//}

//#include <stdio.h>
//int main() {
//	int number;
//	int multiple = 1;
//	for (number = 3; number <= 8; number++)
//	{
//		multiple = number * multiple;		
//	}printf("%d\n", multiple); 
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	for (int number = 1; number <= 50; number++)
//	{
//		int num1 = number % 10;
//		int num10 = number / 10;
//
//		//if((num1&& num1%3 == 0)|| (num10 && num10 % 3 == 0))
//		if (num1 == 3 || num1 == 6 || num1 == 9|| num10 ==3 || num10==6 || num10 ==9)
//			printf("%d\n", number);
//
//	
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int number;
//	printf("100이하의 제곱수를 출력합니다.\n");
//
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("100이하 7의 배수를 출력합니다.\n");
//
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char input;
//	for (; ; )
//	{
//		scanf(" %c", &input);
//		switch (input)
//		{
//		case's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		}
//	}return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number-1;
//		exitFor;
//		number *= exitFor, exitFor--)
//	{
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for(int number=10, exitFor=number-1;
//		exitFor;
//		number*=exitFor,exitFor--)
//	{
//		printf("%d\n", number);
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num;	
//	for (num = 11; num <= 200; num += 11) {
//		//printf("%d", num);
//		//if (num > 200) break;
//		//printf(",");
//		printf("%d,", num);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	float sqLine;
//	for(sqLine=0.1; sqLine*4<=21; sqLine+=0.1)
//	{ 
//		printf("%.1f\n", sqLine);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번\n", myClass, student);
//	}
//
//	myClass++;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번 \n", myClass, student);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++) {
//		for (student = 1; student <= 3; student++) {
//			printf("%d반 %d번 \n", myClass,student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++) {
//		for (student = 1; student <= 30; student++) {
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번\n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{	
//	int dan;
//	int num;
//	for(dan=2;dan<=9;dan++)
//	{
//		for (num = 1; num <= 9; num++) {
//			printf("%d X %d = %d\t", dan, num, dan * num);
//			if (num == 9)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	//dan,num 변수 바뀜 / break 말고 continue쓰기
	int num;
	int dan;


	for (num = 1; num <= 9; num++)
	{
		for (dan = 1; dan <= 9; dan++) {
			printf("%d X %d = %d\t", num, dan, num * dan);
				 
			if (dan == 9)
			{
				printf("\n");
			}
		}
	}
	return 0;
}




//#include <stdio.h>
//int main()
//{
//	int F;
//	int S;
//
//	for (F = 1; F <= 4; F++) {
//		for (S = 1; S <= 6; S++)
//		{
//			printf("4면 - %d, 6면 - %d\n", F, S);
//			if (S == 6)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}