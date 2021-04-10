#include <stdio.h>
#include <stdlib.h>
main(){

int mat[3][3],l,c, tP=0, tI=0;
for(l=0;l<3;l++){
	for(c=0;c<3;c++){
	printf("Valor posicao[%d][%d]",l,c);
	scanf("%d",&mat[l][c]);	
	}	
}
for(l=0;l<3;l++)
{
for(c=0;c<3;c++)
{
if(mat[l][c]%2==0)
tP++;
else
tI++;
}
}
printf("Total de numeros pares: %d\nTotal de numeros impares: %d\n", tP, tI);
system("PAUSE");
}
