#include "functii_12.h"

int bt(int input, int suma, int nr)
{
//	printf("%d ",input);
//	suma += input;
	if(suma==2 && nr==4)
		{
			printf("\n%d ",input);
			return 1;
		}
	else if( suma>=3 ||	nr>=4) return 0;
	else printf("%d ",input);
//	suma += input;
	if(bt(0,suma+0,nr+1) == 1)
		{
			printf("%d ",input);
			return 1;
		}
//	else return 0;
	if(bt(1,suma+1,nr+1) == 1)
		{
			printf("%d ",input); 
			return 1;
		}
//	else return 0;
	if(bt(2,suma+2,nr+1) == 1) 
		{
			printf("%d ",input); 
			return 1;
		}
	return 0;
    
	 
}

void bt_2(int input, int suma, int nr, int v[4])
{
	int i;
	v[nr-1]=input;
	while(nr<4 && suma<=2)
		{
				bt_2(0,suma+0,nr+1,v);
				bt_2(1,suma+1,nr+1,v);
				bt_2(2,suma+2,nr+1,v);
		}
	if(suma==2 && nr==4)
		{
		 for(i=0; i<4; i++) printf("%d ",v[i]); 
		 printf("\n");
		}
	exit(1);
		
	
}
