#ifndef VIDEO_H
#define VIDEO_H
#include "multimedia.h"
#include <stdlib.h>

class Video:public Multimedia
{
private:
    int duration;

public:
    Video();

    Video(string _name, int _acquisitionDate, string _pathName, int _duration);

    Video(const Video& video);

    ~Video();

    int getDuration() const;

    void setDuration(int _duration);

    virtual bool compare(const Video video);

    virtual void display() const;

    virtual void play() const;

};

#endif // VIDEO_H
