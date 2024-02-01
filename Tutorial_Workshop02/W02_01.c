#include <stdio.h>

void findMidpoint(int x1, int y1, int x2, int y2) {
    int xMid = (x1 + x2) / 2;
    int yMid = (y1 + y2) / 2;

    printf("Midpoint coordinates: (%d, %d)\n", xMid, yMid);
}

int main() {
    int x1, y1, x2, y2;

    printf("Enter the coordinates of the first endpoint (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the second endpoint (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    findMidpoint(x1, y1, x2, y2);

    return 0;
}
