#include "video.h"

Video::Video():Multimedia(){
    duration  = 0;
}

Video::Video(string _name, int _acquisitionDate, string _pathName, int _duration):Multimedia(_name, _acquisitionDate, _pathName),duration(_duration){
}

Video::Video(const Video& video):Multimedia(video){
    duration = video.duration;
}

Video::~Video(){
}

int Video::getDuration() const {
    return duration;
}

void Video::setDuration(int _duration){
    duration = _duration;
}

bool Video::compare(const Video _video){
    return (Multimedia::compare(_video))&&(duration == _video.getDuration());
}

void Video::display() const{
    Multimedia::display();
    cout<<"duration = "<<duration<<endl;
}

void Video::play() const{

    string s = "mplayer " + Multimedia::getPathName() + " &";
    const char *c = s.c_str();
    system(c);
}
