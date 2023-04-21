#include <stdio.h>

int add(int w, int h, int j, int i);

int main(void){
    int mines[4][4] = {{0, 0, 0, 0},
                        {0, 0, 0, 0},
                        {0, 0, 0, 0},
                        {0, 0, 0, 0}};
    int field[4][4] = {{0, 1, 0, 1},
                        {0, 0, 0, 1},
                        {1, 1, 1, 0},
                        {0, 1, 1, 1}};
    int w = 4, h = 4;
    int x = 0, y = 0, i = 0, j = 0;

    for(y = 0; y < h; y++){
        for(x = 0; x < w; x++){
            if(field[y][x] == 0) continue;

            for(j = y - 1; j <= y + 1; j++){
                for(i = x - 1; i <= x + 1; i++){
                    if(field[j][i] == 1) mines[y][x] += add(w, h, j, i);
                }
            }
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", mines[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int add(int w, int h, int j, int i){
    if(i >= 0 && i < w && j >= 0 && j < h) return 1;
    return 0;
}