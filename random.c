#include <stdio.h>
#include <unistd.h>

#define RESULT_NUM 100
int main(){
	printf("random test program start.\n");
	int i;
	int max;
	int min;
	int result_rand[RESULT_NUM];

	srand(10);



	/*一様乱数*/
	//乱数生成
	for(i=0;i<RESULT_NUM;i++){
		result_rand[i] = rand();
	}

	//確認
	printf("RESULT rand\n");
	for(i=0;i<RESULT_NUM;i++){
		printf("\t[%d] %d\n",i,result_rand[i]);
	}


	/*値域制限*/
	//乱数生成
	max = 100;
	min = 0;
	for(i=0;i<RESULT_NUM;i++){
		result_rand[i] = rand()%(min-max+1)+min;
	}

	//確認
	printf("RESULT rand\n");
	for(i=0;i<RESULT_NUM;i++){
		printf("\t[%d] %d\n",i,result_rand[i]);
	}


	/*指数分布?*/
	max = 100;
	min = 0;
	double ramda = 1.0;
	double e = 2.7182;
	int x = rand()%(min-max+1)+min;
	int y = rand()%(min-max+1)+min;


	return 0;

}


