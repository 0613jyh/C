#include <stdio.h>

/*
int Main(void)
(
	printf(안녕하세요? \n);
	printf(이번코드에는 많은 오류가 있다네요\n)
	print(제가한번 다 고쳐보겠습니다.\n);
	return 0;
)

우선적으로 위는 예제에 있는 bug.c 파일이다. 

main이랑 Main이랑 다르므로, int main(void)로 작성해주어야 하며,
()이 아니라 {}이 하나의 묶음처리가 된다.
3번째 줄에 있는 printf(안녕하세요? \n); 부분에서는
맨 처음부터 printf("안녕하세요? \n);으로 수정해주어야 하고
printf(이번코드에는 많은 오류가 있다네요\n) 에서는 마찬가지로 " "와, 맨 마지막 ;이 누락됐다.
print(제가한번 다 고쳐보겠습니다.\n); 는 맨 앞 부분 print'f'가 빠졌고, 문자열에는 " "을 붙혀야 한다.
수정하면 이렇게 나온다.

*/

int main(void)
{
	printf("안녕하세요? \n");
	printf("이번 코드에는 많은 오류가 있다네요. \n");
	printf("제가 한번 다 고쳐보겠습니다. \n");
	return 0;
}
