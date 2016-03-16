#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char *arr[], int n){
	int len = n;
	int i, j;
	//char *sortstr[len];
	for(i=len; i>0; i--){
		//printf("dbug:%s-->%di,j::%d\n",__FILE__,__LINE__,j);
		for(j=0; j<i-1; j++){
			printf("dbug:%s-->%d,j::%d\n",__FILE__,__LINE__,j);
			//continue;
			if(strcmp(arr[j],arr[j+1]) > 0){				
				printf("bf:%s<-->%s\n",arr[j],arr[j+1]);
				//swapstr(&arr[j],&arr[j+1]);
				char *tmp = arr[j];
        			arr[j] = arr[j+1];
       				arr[j+1] = tmp;
				//swap2(arr[j],arr[j+1]);
				printf("af:%s<-->%s\n",arr[j],arr[j+1]);
	 			//sortstr[i] = (char*)malloc(strlen(arr[i]));
				//strcpy(sortstr[i],arr[i]);
			}else{
				//swapstr(arr[i],arr[i+1]);
				//strcpy(sortstr[i],arr[i]);
			}
	//		printf("dbug:%s-->%d,i::%d,strlen:%d\n",__FILE__,__LINE__,i,strlen(arr[i]));	
	// 		sortstr[i] = (char*)malloc(strlen(arr[i]));
	//		strcpy(sortstr[i],arr[i]);
		}
	}	
//	for(i=0; i<len; i++){
//		strcpy(arr[i],sortstr[i]);
//	}
	//for(i=0; i<5; i++){
	//	printf("result : %s\n",arr[i]);
	//}
}
void swapstr(char *str1, char *str2){
	char *temp = str1;
  	str1 = str2;
  	str2 = temp;
}
void swap2(char *str1, char *str2)
{
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  free(temp);
} 
#if 0
int strlen(char *str){
	int len = 0;
	for(;str[len]!='\0';len++){}
	return len;
}

int comstr(char *str1, char *str2){
	int minlen = strlen(str1) >= strlen(str2) ? strlen(str1):strlen(str2);
	int i=0;
	for(; i<minlen; i++){
		
	}

}
int comchar(char c1, char c2){
	if()

}
#endif
int main(int argc, const char *argv[])
{
	char *arr[5] = {"asd","dsa","ads","das","sda"};
	int i;
	sort(arr,5);
	for(i=0; i<5; i++){
		printf("result : %s\n",arr[i]);
	}
	return 0;
}
