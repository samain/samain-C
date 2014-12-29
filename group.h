#ifndef GROUP_H
#define GROUP_H

#include "multimedia.h"
#include <stdlib.h>
#include <list>
#include <iterator>
#include "intrusive_ptr.h"

class Group:public list<Multimedia, allocator<Multimedia> >, public Pointable
{
private:
    string name;

public:
    Group();
    Group(string _name, list<Multimedia, allocator<Multimedia> > multList);
    ~Group();
    string getName();
    void setName(string _name);
    void addMultimedia(const Multimedia _mult);
    void deleteMultimedia(const Multimedia _mult);
    void display();
};

#endif // GROUP_H
