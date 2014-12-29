#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H
#include <string>
#include <iostream>
#include "intrusive_ptr.h"

using namespace std;

class Multimedia : public Pointable{
private :
    string name;
    int acquisitionDate;
    string pathName;

public:
     Multimedia();

     Multimedia(string _name, int _acquisitionName, string _pathName);

     Multimedia(const Multimedia& mult);

     ~Multimedia();

     string getName()const;

     int getAcquisitionDate()const;

     string getPathName()const;

     void setName(const string _name);

     void setAcquisitionDate(const int _date);

     void setPathName(const string _pathName);

     virtual bool compare(const Multimedia mult);

     virtual void display() const;

     virtual void play() const;
};

#endif // MULTIMEDIA_H
