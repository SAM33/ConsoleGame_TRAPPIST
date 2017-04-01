#ifndef MAPOBJECT_H
#define MAPOBJECT_H

#include <iostream>
#include <string>
#include "mvc.h"
#include "gameExpansion.h"

class mapObject
{
    public:
        mapObject(int ID);
        virtual ~mapObject();
        virtual void onRender();
        virtual void onPrint();
        virtual std::string getTypeName();
        virtual void reqSetName(int indexOfSameType);
        int getTypeID();
        int getID();
    protected:
        void updateTypeName(std::string child_type_name);
        void setTypeID(int id);
    private:
        int id;
        int type_id;
        std::string type_name;
        std::string name;
        int x;
        int y;
        int width;
        int height;
};
#endif // MAPOBJECT_H
