#include <stdio.h>
using namespace std;

int min_max(int a, int b, int c){
	int min = 10000;
	int max = 1000;

	int n = 3;
	int arr[n] = {a, b, c};
	for( int i = 0; i < n; i++){
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}

	return max + min;
}

int main(){
	int TC, a, b, c;
	int j = 1;
	scanf("%d", &TC);
	
	while(TC--){
		scanf("%d %d %d", &a, &b, &c);
		int sum = a + b + c;
		int salary = sum - min_max(a, b, c);
		printf("Case %d: %d\n", j, salary);
		j++;
	}
	
	return 0;
}
