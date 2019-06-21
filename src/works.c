#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    int i,j,S;
    j = 0;
    S = 0;
    for(i = 0; i < n; i++){
        S = S + A[i];
        if (A[i] > x) return 0;
        else if(S > x){
            j = j + 1;
            S = A[i];
        }
    }
    return j < k;
}
//全員に仕事量xを与えたら全仕事が終わるか？

int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);}
    lb = 0;
    ub = 1000000000;
    while(ub - lb > 1){
        int m = (lb + ub) / 2;
        if(p(m) == 1){
            ub = m;
        }
        else {
            lb = m;
        }
    }
    
    printf("%d\n",  ub);
    return 0;
}


