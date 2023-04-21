#include <stdio.h>
#include <stdlib.h>



int main(int argc, char* argv[]){
	double outPIe = 1;
	int boolean = 0;

	int i = 0;
	double j = 1;
	while(outPIe !=  3.14159265358979323){
		if(i > 0){
			if(boolean == 0){
				outPIe -= (1/j);
				boolean = 1;
			}else{
				outPIe += (1/j);
				boolean = 0;
			}
		}

		j += 2;
		printf("PI = %1.17f\n", outPIe * 4);
		i++;
	}
};
