#include <stdio.h>
int main(){
    int n, count=0;
    int arr[4];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int k=0; k<4; k++){
            scanf("%d",&arr[k]);
        }
        for(int j=0; j<3; j++){
           if(arr[0]<arr[j+1]){
            count++;
            //printf("%d\n",count);
           }

        }
        printf("%d\n",count);
        count=0;
    }
}