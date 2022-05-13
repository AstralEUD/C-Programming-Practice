#include <stdio.h>
#include <stdlib.h>
// 가위바위보 베팅버전 
int main (void) {
	int score, bet, user, computer, select;
	select = 1; score = 0;
	while (select == 1) {
		printf("[현재 점수 : %d] 얼마 베팅하시겠습니까? : ",score);
		scanf("%d",&bet);
		score = score - bet;
		printf("[현재 점수 : %d] 가위, 바위, 보 중 하나를 입력 (가위=0, 바위=1, 보=2) : ",score);
		scanf("%d",&user);
		computer = rand() %3;
		printf("컴퓨터 : %d, 사용자 : %d\n",computer,user);
		if ((user+1) % 3 == computer) {
			printf("컴퓨터의 승리입니다.. 돈은 사라집니다.\n");
		} else if (computer == user) {
			printf("비겼습니다.. 돈은 돌려받습니다.\n ");
			score = score+bet;
		} else {
			printf("이겼습니다..! 돈이 두배로 늘어났습니다.\n");
			score = score + bet + bet;
		}
		printf("[현재 점수 : %d] 계속하시려면 1, 중단할려면 0 입력 : ",score);
		scanf("%d",&select);
	}
}
