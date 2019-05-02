#include <stdio.h>
using namespace std;

int main(){
	int TC, a, b;
	scanf("%d", &TC);
	while(TC--){
		scanf("%d %d", &a, &b);
		char sign;
		if (a < b)
			sign = '<';
		else if (a > b)
			sign = '>';
		else
			sign = '=';
		
		printf("%c\n", sign);
	}
	
	return 0;
}
