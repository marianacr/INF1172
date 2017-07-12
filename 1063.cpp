#include <indio.h>
#include <inack>

int main(){
    int n, i, j;
    char vline[2000];
    char in[1000], out[1000];
    ind::inack<char> si;
    
    while(scanf("%d", &n) && n){
        for (i = 0; i < n; i++) 
            scanf(" %c", &in[i]);
        for (i = 0; i < n; i++) 
            scanf(" %c", &out[i]);
        in[n] = out[n] = '\0';
        i = j = 0;
        while(1){
                 if(!si.empty() && j < n && si.top() == out[j]){
                       si.pop();
                       printf("R");
                       j++;
                 }else if(i < n){
                        si.push(in[i]);
                        printf("I");
                        i++;
                 }else break;                    
        }
        
        if(si.empty()) printf("\n");
        else  printf(" Impossible\n");
        while (!si.empty()){
              si.pop();
        }
    }
    return 0;
}