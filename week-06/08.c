//08 นักโทษแห่งอัซคาบัน
#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	for (i = 0; i < numPrisoners; i++) {
		int round;
		if(i == 0) {
			round = 1;
		} else {
			round = 0;
		}
		for(; round < m; round++) {
			int temp = prisoners[0];
			for(int j = 1; j < numPrisoners; j++) {
				prisoners[j - 1] = prisoners[j];
			}
			prisoners[numPrisoners - 1] = temp;
			while(prisoners[0] == 0) {
				int temp = prisoners[0];
				for(int j = 1; j < numPrisoners; j++) {
					prisoners[j - 1] = prisoners[j];
				}
				prisoners[numPrisoners - 1] = temp;
			}
		}
        killed[i] = *killerPtr;
        removeKilled(&prisoners[0], numPrisoners, *killerPtr);
    }

    for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}

	return 0;
}

void removeKilled(int *array, int size, int killedPrisoner) {
	for(int i = 0; i < size; i++, array++) {
		if(*array == killedPrisoner) {
			*array = 0;
			break;
		}
	}
}