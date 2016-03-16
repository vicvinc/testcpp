#include <iostream>

using namespace std;

    void shift(int A[],int i,int len){
        int n;
        for( n=len-1; n>=i; n--){
            A[n] = A[n-1];
        }
        A[i] = 0;
    }
    void merge(int A[], int m, int B[], int n) {
        int i,j,k;
        i=j=k=0;
#if 0
	if(m<n){
            merge(B,n,A,m);
            return;
        }
#endif
        while(j<n && i<m+k){
            if(A[i] <= B[j]){
                i++;
            }else{
                shift(A,i,m+n);
                A[i] = B[j];
                j++;
		k++;
            }
        }
#if 1
/*
	if(i == m+k){
          i++;
        }
*/
	//i = m+k;
	cout << "i: " << i << "j: "<< j << endl;
        while(j<n){
        	A[i]=B[j];
        	j++;
		i++;
        }
#endif
    }

int main(int argc, const char* argv[])
{
#if 0 
  int a[9] = {1,3,5,7,9};
  int b[4] = {2,4,6,8};
  merge(a,5,b,4);
#endif
  int a[6] = {4};
  int b[5] = {2,3,4,5,6};
  merge(a,1,b,5);
  for(int i=0; i<6; i++){
    cout << a[i] << endl;
  }
  return 0;
}
