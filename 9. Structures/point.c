#include <cstdio>

struct point {
    int x;
    int y;
};

int main() {
    struct point p = {.x = 5, .y = 7};
    printf("%d - %d\n", p.x, p.y);
    struct point t[3] = {{.x = 3 , .y = 6}, {. x = 5, .y = 7}, {.x = 3, .y = -1}};
    for (int i = 0; i < 3; i++) {
        printf("%d - %d\n", t[i].x, t[i].y);    
    } 


    
}

