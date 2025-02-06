#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

Point* Point_create(int x, int y) {
    Point* p = (Point*)malloc(sizeof(Point));
    if (p == NULL) {
        fprintf(stderr, "Erro ao alocar memória para Point.\n");
        exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
}

int Point_validate(int value) {
    return (value >= 0 && value <= 400);
}

void Point_setX(Point* p, int x) {
    if (Point_validate(x)) {
        p->x = x;
    } else {
        fprintf(stderr, "Erro: Valor de x fora do intervalo 0-400.\n");
    }
}

void Point_setY(Point* p, int y) {
    if (Point_validate(y)) {
        p->y = y;
    } else {
        fprintf(stderr, "Erro: Valor de y fora do intervalo 0-400.\n");
    }
}

int Point_getX(Point* p) {
    return p->x;
}

int Point_getY(Point* p) {
    return p->y;
}

void Point_moveBy(Point* p, int dx, int dy) {
    Point_setX(p, Point_getX(p) + dx);
    Point_setY(p, Point_getY(p) + dy);
}

typedef struct {
    Point base; 
} ScreenPoint;

ScreenPoint* ScreenPoint_create(int x, int y) {
    ScreenPoint* sp = (ScreenPoint*)malloc(sizeof(ScreenPoint));
    if (sp == NULL) {
        fprintf(stderr, "Erro ao alocar memória para ScreenPoint.\n");
        exit(1);
    }
    Point_setX(&(sp->base), x);
    Point_setY(&(sp->base), y);
    return sp;
}

int ScreenPoint_validate(int value) {
    return (value >= 0 && value <= 300);
}

void ScreenPoint_setX(ScreenPoint* sp, int x) {
    if (ScreenPoint_validate(x)) {
        Point_setX(&(sp->base), x);
    } else {
        fprintf(stderr, "Erro: Valor de x fora do intervalo 0-300.\n");
    }
}

void ScreenPoint_setY(ScreenPoint* sp, int y) {
    if (ScreenPoint_validate(y)) {
        Point_setY(&(sp->base), y);
    } else {
        fprintf(stderr, "Erro: Valor de y fora do intervalo 0-300.\n");
    }
}

int ScreenPoint_getX(ScreenPoint* sp) {
    return Point_getX(&(sp->base));
}

int ScreenPoint_getY(ScreenPoint* sp) {
    return Point_getY(&(sp->base));
}

void ScreenPoint_moveBy(ScreenPoint* sp, int dx, int dy) {
    Point_moveBy(&(sp->base), dx, dy);
}

int main() {
    Point* p = Point_create(10, 10);
    printf("Point inicial: (%d, %d)\n", Point_getX(p), Point_getY(p));

    Point_moveBy(p, 100, 150);
    printf("Point após mover: (%d, %d)\n", Point_getX(p), Point_getY(p));

    Point_setX(p, 500); 
    Point_setY(p, -10); 

    free(p);

    ScreenPoint* sp = ScreenPoint_create(50, 50);
    printf("ScreenPoint inicial: (%d, %d)\n", ScreenPoint_getX(sp), ScreenPoint_getY(sp));

    ScreenPoint_moveBy(sp, 200, 250);
    printf("ScreenPoint após mover: (%d, %d)\n", ScreenPoint_getX(sp), ScreenPoint_getY(sp));

    ScreenPoint_setX(sp, 400); 
    ScreenPoint_setY(sp, -5);  

    free(sp);

    return 0;
}