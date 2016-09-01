#include <stdio.h>
int main()
{
    int grid[101][101]={0,}, w, h, n, x, y, d, l, i, j;
    scanf("%d %d", &w, &h);
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if(d==0){
            for(j=0; j<l; j++){
                grid[x+j-1][y-1]=1;
            }
        }else{
            for(j=0; j<l; j++){
                grid[x-1][y+j-1]=1;
            }
        }
    }

    for(i=0; i<w; i++){
        for(j=0; j<h; j++){
            printf("%d ", grid[j][i]);
        }
        printf("\n");
    }

    return 0;
}
