#include "stdio.h"
#include "stdlib.h"
int main(void)
{
	int A[3][3]; 二維陣列資料
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("陣列A[%d][%d]的位址為:%d", i,j, &A[i][j]);		
		}
		printf("\n");
	}
	return 0;
}


陣列A[0][0]的位址為:6487536陣列A[0][1]的位址為:6487540陣列A[0][2]的位址為:6487544
陣列A[1][0]的位址為:6487548陣列A[1][1]的位址為:6487552陣列A[1][2]的位址為:6487556
陣列A[2][0]的位址為:6487560陣列A[2][1]的位址為:6487564陣列A[2][2]的位址為:6487568
