#include <stdio.h>
#include <math.h>
    
    typedef struct { double x; double y; } Point;
    typedef struct { Point p1; Point p2; Point p3; } Triangle;
    
    //a)
    void pointShow(Point p){
        printf("[ %f ], [ %f ]\n", p.x, p.y);
    }

    //b)
    double pointDist(Point p1, Point p2){
        double xDiff = p1.x - p2.x;
        double yDiff = p1.y - p2.y;
        return sqrt( xDiff * xDiff + yDiff * yDiff );
    }

    //c)
    double triangleArea(Triangle tri){
        double a = pointDist(tri.p1, tri.p2);
        double b = pointDist(tri.p2, tri.p3);
        double c = pointDist(tri.p3, tri.p1);

        double s = (a + b + c) / 2;
        return sqrt( s * (s - a) * (s - b) * (s - c));
    }


    int main(void) {
        Point point1 = {3, 4};
        Point point2 = {6, 2};
        Point point3 = {8, 9};
        Triangle tri1 = {point1, point2, point3};
        pointShow(point1);
        printf("%f\n", pointDist(point1, point2));
        printf("%f\n", triangleArea(tri1));
        return 0;
    }