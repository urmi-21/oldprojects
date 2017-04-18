#include  <stdio.h>

void hanoi(int no, int x, int y)
{
    int  xstk[100], ystk[100], sstk[100];
    int  ptr = 0;
    int  sw = 0;

    while (1) {
        if (sw == 0 && no > 1) {
            xstk[ptr] = x;
            ystk[ptr] = y;
            sstk[ptr] = sw;
            ptr++;
            no = no - 1;
            y = 6  - x - y;
            continue;
        }
        printf("Moving [%d] from %d to %d.\n", no, x, y);
        if (sw == 1 && no > 1) {
            xstk[ptr] = x;
            ystk[ptr] = y;
            sstk[ptr] = sw;
            ptr++;
            no = no - 1;
            x = 6  - x - y;
            if (++sw == 2) sw = 0;
            continue;
        }
        do {
            if (ptr-- == 0)
                return; 
            x  = xstk[ptr];
            y  = ystk[ptr];
            sw = sstk[ptr] + 1;
            no++;
        } while (sw == 2);
    }
}

int main(void)
{
    int  n;

    printf("Insert number of disks :");
    scanf("%d", &n);

    hanoi(n, 1, 3);

    return (0);
}
