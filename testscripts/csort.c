#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char *arr[], int n){
	int len = n;
	int i, j;
	for(i=0; i<len-1; i++){
		int k = i;
		for(j=i+1; j<len; j++){
			if(strcmp(arr[k],arr[j]) > 0){				
				k=j;
			}
		}
		if(k!=i){
			char *tmp = arr[i];
        		arr[i] = arr[k];
       			arr[k] = tmp;
		}
	int s;
	for(s=0; s<5; s++){
		printf("%s",arr[s]);
	}
	printf("\n");
	}	
}
int main(int argc, const char *argv[])
{
	char *arr[5] = {"4","3","2","1","0"};
	int i;
	sort(arr,5);
	for(i=0; i<5; i++){
		printf("result : %s\n",arr[i]);
	}
	return 0;
}
