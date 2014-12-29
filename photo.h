#ifndef PHOTO_H
#define PHOTO_H
#include "multimedia.h"

class Photo:public Multimedia{
private:
    string place;

public:
    Photo();

    Photo(string _name, int acquisitionDate, string _pathName, string _place);

    Photo(const Photo& photo);

    ~Photo();

    string getPlace() const;

    void setPlace(const string _place);

    virtual bool compare(const Photo photo);

    virtual void display() const;

    virtual void play() const;

    };

#endif // PHOTO_H
