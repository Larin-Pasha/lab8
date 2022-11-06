#include "Chas.h"
int hour, min1, sec;
int a, b, c;
int sec_in_min = 60;


Chas::Chas() :Triada() {
    desc = "";
}
Chas::Chas(std::string y, int h, int m, int s, std::string d) : Triada(y, h, m, s)
{
    desc = d;
}
void Chas::Display()
{
    Triada::Display();
    cout << "desc: " << desc << endl;
}

void setSec(int a) {
    sec = a;
}

void setMin(int b) {
    min1 = b;
}

void setHour(int c) {
    hour = c;
}
int Chas::getSec() {
    return a;
}

int Chas::getMin() {
    return b;
}

int Chas::getHour() {
    return c;
}


bool isLeapHour(int c) {
    if (((c % 4 == 0) && (c % 100 != 0)) || (c % 400 == 0)) {
        return true;
    }
    return false;
}

bool checkSec(Chas& Time) {
    for (auto i : { 0, 2, 4, 6, 7, 9, 11 }) {
        if (Time.getMin() == i + 1) {
            if (Time.getSec() >= 1 && Time.getMin() <= sec_in_min) {
                return true;
            }
        }
    }
    for (auto i : { 3, 5, 8, 10 }) {
        if (Time.getMin() == i + 1) {
            if (Time.getSec() >= 1 && Time.getSec() <= sec_in_min) {
                return true;
            }
        }
    }
    if (Time.getMin() == 2) {
        if (isLeapHour(Time.getHour())) {
            if (Time.getSec() >= 1 && Time.getSec() <= 60) {
                return true;
            }
        }
        else {
            if (Time.getSec() >= 1 && Time.getSec() <= 60) {
                return true;
            }
        }
    }
    return false;
}

bool checkMin(Chas& Time) {
    if (Time.getMin() >= 1 && Time.getMin() <= 60) {
        return true;
    }
    return false;
}

bool checkHour(Chas& Time) {
    if (Time.getHour() >= 1 && Time.getHour() <= 24) {
        return true;
    }
    return false;
}

bool Chas::checkTime(Chas& Time) {
    if ((checkSec(Time) == true) &&
        (checkMin(Time) == true) &&
        (checkHour(Time) == true)) {
        return true;

    }
    else {
        return false;
    }

};
