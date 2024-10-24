#include<stdio.h>
#include<stdlib.h>

int C(int n,int k);

int main(){
    int n,k,res;
    printf("enter n and k\n");
    scanf("%i%i",&n,&k);
    res=C(n,k);
    printf("%i\n",res);
}

int C(int n,int k){
    if (n==k||k==0)
    {
        return 1;
    }
    
    return C(n-1,k-1)+C(n-1,k);

}