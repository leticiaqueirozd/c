#include <iostream>
#include <stdexcept>

class Point {
protected:
    int x = 0, y = 0;

    void validate(int x, int y) {
        if (x < 0 || x > 400 || y < 0 || y > 400) {
            throw std::invalid_argument("Coordenadas fora do intervalo permitido (0 <= x, y <= 400).");
        }
    }

public:
    Point() = default;

    Point(int x, int y) {
        setX(x);
        setY(y);
    }

    int getX() { return x; }
    int getY() { return y; }

    void setX(int x) {
        validate(x, this->y); 
        this->x = x;
    }

    void setY(int y) {
        validate(this->x, y); 
        this->y = y;
    }

    void moveBy(int dx, int dy) {
        setX(getX() + dx);
        setY(getY() + dy);
    }
};

class ScreenPoint : public Point {
protected:
    void validate(int x, int y) {
        if (x < 0 || x > 300 || y < 0 || y > 300) {
            throw std::invalid_argument("Coordenadas fora do intervalo permitido (0 <= x, y <= 300).");
        }
    }

public:
    ScreenPoint(int x, int y) {
        setX(x);
        setY(y);
    }

    void setX(int x) {
        validate(x, this->y); 
        this->x = x;
    }

    void setY(int y) {
        validate(this->x, y); 
        this->y = y;
    }
};

int main() {
    try {
        Point *p = new Point(10, 10);
        std::cout << "Point: (" << p->getX() << ", " << p->getY() << ")\n";

        ScreenPoint *sp = new ScreenPoint(50, 50);
        std::cout << "ScreenPoint: (" << sp->getX() << ", " << sp->getY() << ")\n";

        p->moveBy(390, 390); 
        std::cout << "Point após mover: (" << p->getX() << ", " << p->getY() << ")\n";

        sp->moveBy(250, 250); 
        std::cout << "ScreenPoint após mover: (" << sp->getX() << ", " << sp->getY() << ")\n";

    } catch (const std::invalid_argument &e) {
        std::cerr << "Erro: " << e.what() << "\n";
    }

    return 0;
}