#ifndef MMO_OBJECT_H
#define MMO_OBJECT_H

// Abstract class for every game object to inherit
class Object {
public:
    long getID();
private:
    long id;
};

#endif //MMO_OBJECT_H
