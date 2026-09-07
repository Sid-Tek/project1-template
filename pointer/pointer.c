#include <stdio.h>
#include <stdlib.h>

struct pair {
    int x;
    int y;
};

static void update(int *p, struct pair *q)
{
    *p += 10;
    q->y = *p;
}

int main(void)
{
    int a[4] = {10, 20, 30, 40};
    int *p = a;
    int **pp = &p;
    int i;

    struct pair local = {1, 2};
    struct pair *heap = malloc(sizeof *heap);
    struct pair *qwe = malloc(100 * sizeof *qwe);
    if (heap == NULL)
        return 1;
    if (qwe == NULL)
        return 2;

    heap->x = 5;
    heap->y = 6;

    for (int i=0; i<100; i++){
        (qwe+i)->x = i;
        (qwe+i)->y = 2*i;
    }

    update(&a[1], heap);

    printf("%d %d %d\n", *p, *(*pp + 1), heap->y);
    printf("local = {%d, %d}\n", local.x, local.y);

    /* TODO (Part I): dynamically allocate an array of 100 struct pair
       objects, initialize element i to {i, 2*i}, and free it. */

    free(heap);
    free(qwe);
    return 0;
}
