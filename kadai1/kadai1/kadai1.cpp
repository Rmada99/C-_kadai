#include "disp.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

	//bool pFail = false;

	//bool Fail = false;

	srand((unsigned int)time(NULL));//現在時刻を元に種を生成

	//5教科の点数をランダムで作成
	float math = rand() % 101;
	printf("数学%f\n", math);

	float english = rand() % 101;
	printf("英語%f\n", english);

	float science = rand() % 101;
	printf("理科%f\n", science);

	float social = rand() % 101;
	printf("社会%f\n", social);

	float nationalLanguage = rand() % 101;
	printf("国語%f\n", nationalLanguage);

	//合計点
	dispResult(math, english, science, social, nationalLanguage);

	dispPass(math, english, science, social, nationalLanguage);


	}



	/*

	if (math < pass_score) {
		pFail = true;
	}
	if (english < pass_score) {
		pFail = true;
	}
	if (science < pass_score) {
		pFail = true;
	}
	if (social < pass_score) {
		pFail = true;
	}
	if (nationalLanguage < pass_score) {
		pFail = true;
	}
	
	if (ave < 60)
	{
		printf("平均点60点未満\n");
		Fail = true;
	}

	if (pFail == true) {
		printf("40点未満");
		Fail = true;
	}

	if (Fail == true) 
	{
		printf("不合格\n");
	}
	else
	{
		printf("合格\n");
	}
	return 0;
	*/