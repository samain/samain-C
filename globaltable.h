#ifndef GLOBALTABLE_H
#define GLOBALTABLE_H

#include <string.h>
#include "multimedia.h"
#include "photo.h"
#include "video.h"
#include "film.h"
#include "group.h"

using namespace map;

class GlobalTable : public Pointable{
private:
    map<string, Multimedia> multTable;
    map<string, Group> groupTable;

public:
    GlobalTable();

    Photo& createPhoto(string _name, int acquisitionDate, string _pathName, string _place);
    Video& createVideo(string _name, int _acquisitionDate, string _pathName, int _duration);
    Film& createFilm(string _name, int _acquisitionDate, string _pathName, int _duration, int _chapterNumber, int * const _chapterDurations);
    Group& createGroup(string _name, list<Multimedia, allocator<Multimedia> > multList);

    void suppressMultimedia(string _name);
    void suppressGroup(string _name);

    void seekMulitmedia(string _name);
    void seekGroup(string _name);

    void playMultimedia(string _name);
};

#endif // GLOBALTABLE_H
