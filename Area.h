//
// Created by bryan on 13/07/2025.
//

#ifndef AREA_H
#define AREA_H



class Area {
    private:
        int a,b,n;
        int i;

    public:
        Area(int a, int b, int n);
        Area();
        double areaTrapeze(int a, int b, int n);
        double fct(double x);
        ~Area();


    Area(int a, int b, int n)
    {
        this->a = a;
        this->b = b;
        this->n = n;
    }
    ~Area() {}
    Area() {}
    double areaTrapeze(int a, int b, int n)
    {
        double result = 0.0;
        if(n > 0 && b >= a)
        {
            result = ((b-a)/(2*n))*(fct(a)+fct(b)+2*fct(n));
        }
        return result;
    }

double fct(double x)
{

}
};



#endif //AREA_H
