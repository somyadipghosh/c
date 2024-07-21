#include<stdio.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
};

int main()
{
    struct Student Harry, Ravi, Subham;
    Harry.id=1;
    Ravi.id=2;
    Subham.id=3;
    Harry.marks=358;
    Ravi.marks=458;
    Subham.marks=428;
    Harry.fav_char='P';
    Ravi.fav_char='Q';
    Subham.fav_char='R';
    return 1;
}