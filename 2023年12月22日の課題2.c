#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main() {
	srand(time(0));
	int I = (rand() % 20) + 1;
	int S = (rand() % (20-I)) + 1;
	int C = 20-I-S;
	if (I > S && I > C)
		printf("あなたは「mage」です。パラメータはinteligence:%d stamina;%d charisma:%d となっています。", I, S, C);
	else if(S > I && S > C)
		printf("あなたは「attacker」です。パラメータはinteligence:%d stamina;%d charisma:%d となっています。", I, S, C);
	else if(C > I && C > S)
		printf("あなたは「thief」です。パラメータはinteligence:%d stamina;%d charisma:%d となっています。", I, S, C);
	else if(I==S && I > C)
		printf("あなたは「special character」です。パラメータはinteligence:%d stamina;%d charisma:%d となっています。", I, S, C);
	else if(I==C && I > S)
		printf("あなたは「unique character」です。パラメータはinteligence:%d stamina;%d charisma:%d となっています。", I, S, C);
	else
		printf("あなたは「unique character」です。パラメータはinteligence:%d stamina;%d charisma:%d となっています。", I, S, C);

}
