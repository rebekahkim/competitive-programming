#include <stdio.h>
using namespace std;

int main(){
	int TC, k, a;
	int j = 1;
	scanf("%d", &TC);
	
	while(TC--){
		int max = 1;
		scanf("%d", &k);
		while(k--){
			scanf("%d", &a);
			if(a > max)
				max = a;
		}

		printf("Case %d: %d\n", j++, max);
	}
	
	return 0;
}
