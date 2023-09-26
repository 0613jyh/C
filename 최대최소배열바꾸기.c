#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10

int main()
{
	int data[MAX] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 }; // max index 3 & 8
	int maxindex = 0;
	int max = data[0];
	int lowindex = 0;
	int low = data[0];
	int temp;

	for (int i = 0; i < MAX; i++) {

		if (max < data[i]) {
			max = data[i];
			maxindex = i;
		}

		else if (low > data[i]) {
			low = data[i];
			lowindex = i;
		}

		else {
			continue;
		}
	}
	
	for (int i = 0; i < MAX; i++) {
		if (i == lowindex) {
			temp = max;
			data[i] = temp;
		}
		else if (i == maxindex) {
			temp = low;
			data[i] = temp;
		}
		else {
			continue;
		}

	}

	for (int i = 0; i < MAX; i++) {
		printf("%d ", data[i]);
	}



	return 0;
}
