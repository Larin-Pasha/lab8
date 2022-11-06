#pragma once
#include "Triada.h"
using namespace std;

class Chas final :
    public Triada
{
    std::string desc;
public:
    Chas();
    Chas(std::string y, int h, int m, int s, std::string d);
    void Display() override;
    bool checkTime(Chas& Time);
    int getSec();



    int getMin();


    int getHour();


};