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

	
double A[20][30];
已知&A[12][15]=6000
 求&A[18][11]=7408
算式6000+8x((18-12)x30+(11-15))=6000+8(176)=7408

	
int A[3][3][3]
已知&A[0][0][0]=6487456
   &A[2][1][1]=	
算式6487456+4((2-0)x3x3+(1-0)x3+(1-0))

int A[6][7][8]
已知&A[4][3][2]=5000
   &A[2][3][4]=4560
5000+4{(2-4)7*8+(3-3)*8+(4-2)}
5000+4(-110)=4560
