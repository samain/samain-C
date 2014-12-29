#include "multimedia.h"
#include "photo.h"
#include "video.h"
#include "film.h"
#include "group.h"

int main(){
    intrusive_ptr<Multimedia> mult = new Multimedia("mult", 2014, "usr/cal/homes/samain");
    mult->display();
    cout<<endl;

    intrusive_ptr<Multimedia> mult2 = new Multimedia(*mult);
    mult = NULL;
    mult2->setName("mult2");
    mult2->display();
    cout<<endl;


    intrusive_ptr<Photo> photo = new Photo("photo", 2014, "usr/cal/homes/samain", "Provence");
    photo->Photo::display();
    cout<<endl;

    intrusive_ptr<Photo> photo2 = new Photo(*photo);
    photo = NULL;
    photo2->setName("photo2");
    cout<<endl;
    photo2->display();
    cout<<endl;

    intrusive_ptr<Video> video = new Video("video", 2014, "usr/cal/homes/samain", 7);
    video->Video::display();
    cout<<endl;

    intrusive_ptr<Video> video2 = new Video(*video);
    video = NULL;
    video2->setName("video2");
    video2->display();
    cout<<endl;

    intrusive_ptr<Multimedia> *tab = new intrusive_ptr<Multimedia> [10];

    for(int i = 0; i<5; i++){
        tab[i] = new Photo("photo", 2014, "usr/cal/homes/samain", "Provence");
    }

    for(int i = 5; i<10; i++){
       tab[i] =  new Video("video", 2014, "usr/cal/homes/samain", 7);
    }

    for(int i = 0; i<10; i++){
        tab[i]->display();
        cout<<endl;
    }
    cout<<endl;


    int * tab2 = new int[3];

    tab2[0] = 3;

    tab2[1] = 2;

    tab2[2] = 2;

    intrusive_ptr<Film> film = new Film("film4", 2014, "usr/cal/homes/samain", 7, 3, tab2);

    film->display();

    cout<<endl;


    intrusive_ptr<Film> film2 = new Film(*film);

    film2->setName("film2");

    film = NULL;

    film2->display();



    list<Multimedia> list1;

    for (int i = 0; i<7; i++){
        intrusive_ptr<Photo> photo = new Photo("photo", 2014, "usr/cal/homes/samain", "Provence");
        list1.push_front(*photo);
    }

    for (int j = 0; j<7; j++){
       intrusive_ptr<Video> video = new Video("video", 2014, "usr/cal/homes/samain", 7);
       list1.push_front(*video);
    }

    for(int k = 0; k<7; k++){

        int * tab = new int[3];

        tab[0] = 3;

        tab[1] = 2;

        tab[2] = 2;

        intrusive_ptr<Video> film = new Film("film", 2014, "usr/cal/homes/samain", 7, 3, tab);

        list1.push_front(*film);
    }


    intrusive_ptr<Group> group1 = new Group("Groupe1", list1);

    group1->display();


    list<Multimedia> list2;

    for (int i = 0; i<14; i++){
        intrusive_ptr<Photo> photo = new Photo("photo", 2014, "usr/cal/homes/samain", "Provence");
        list2.push_front(*photo);
    }

    intrusive_ptr<Group> group2 = new Group("Groupe2", list2);

    group2->display();



    list<Multimedia> list3;

    for (int j = 0; j<14; j++){
       intrusive_ptr<Video> video = new Video("video", 2014, "usr/cal/homes/samain", 7);
       list3.push_front(*video);
    }


    intrusive_ptr<Group> group3 = new Group("Groupe3", list3);

    group3->display();



    list<Multimedia> list4;

    for(int k = 0; k<7; k++){

        int * tab = new int[3];

        tab[0] = 3;

        tab[1] = 2;

        tab[2] = 2;

        intrusive_ptr<Film> film = new Film("film", 2014, "usr/cal/homes/samain", 7, 3, tab);

        list4.push_front(*film);
    }

    intrusive_ptr<Group> group4 = new Group("Groupe4", list4);

    group4->display();


    list<Multimedia> list5;

    intrusive_ptr<Group> group5 = new Group("Groupe5", list5);

    group5->push_front(*photo2);

    group5->push_front(*video2);

    group5->display();


    list<Multimedia> list6;

    intrusive_ptr<Group> group6 = new Group("Groupe6", list6);

    group6->push_front(*video2);

    group6->push_front(*film2);

    group6->display();

    group1 = NULL;
    group2 = NULL;
    group3 = NULL;
    group4 = NULL;
    group5 = NULL;
    group6 = NULL;

}
