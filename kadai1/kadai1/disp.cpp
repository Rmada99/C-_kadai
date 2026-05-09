#include "disp.h"

#include <stdio.h>


static int total;

static float ave;

void dispResult(int math, int english, int science, int social, int nationalLanguage) {
	//合計点
	total = math + english + science + social + nationalLanguage;
	printf("合計点%d\n", total);

	//平均点
	ave = (float)total / (float)5.0f;
	printf("平均点%f\n", ave);

}

void dispPass(int math, int english, int science, int social, int nationalLanguage)
{
	//合否を判定
	const int pass_score = 40;//教科ごとの合格点は40

	bool pass_math = (pass_score <= math);
	bool pass_english = (pass_score <= english);
	bool pass_science = (pass_score <= science);
	bool pass_social = (pass_score <= social);
	bool pass_nationalLanguage = (pass_score <= nationalLanguage);

	bool pass_all = pass_math && pass_english && pass_science && pass_social && pass_nationalLanguage;

	const float pass_average = 60.0f;
	if (pass_average <= ave && pass_all) {
		printf("合格\n");
	}
	else
	{
		printf("不合格\n");
		if (ave < pass_average) {
			printf("平均点60点未満\n");
		}

		if (!pass_math) {
			printf("数学40点未満");
		}
		if (!pass_english) {
			printf("英語40点未満");
		}
		if (!pass_science) {
			printf("理科40点未満");
		}
		if (!pass_social) {
			printf("社会40点未満");
		}
		if (!pass_nationalLanguage) {
			printf("国語40点未満");
		}
	}
}