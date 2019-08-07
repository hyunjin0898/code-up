#import <stdio.h>

int main(){
	//큰 따옴표 세개가 들어가면 에러 ←큰따옴효를 문자열을 표시하는 수단으로 인식
	//그래서 \와 함께 사용해야함. 
	printf("\"Hello World\"");
	return 0;
}
