#include <iostream>

using namespace std;

    void shift(int A[], int i, int k, int len){
        int n;
        for( n=len-1; n>=i; n--){
            A[n] = A[n-k];
        }
        A[i] = 0;
    }

    void rotate(int nums[], int n, int ks) {
        int k = ks%n;
        if(k == 0) return;
        int *rnum = new int(k);
        for(int i= n-k, j=0; i<n; i++,j++){
            rnum[j] = nums[i];
        }
        shift(nums,0,k,n);
        for(int j=0; j<k; j++){
            nums[j] = rnum[j];
        }
    }
int main(int argc, const char *argv[])
{
  int a[7] = {1,2,3,4,5,6,7};
  rotate(a,7,12);
  for(int i=0; i<7; i++){
    cout<< a[i] << endl;
  }
  return 0;
}
