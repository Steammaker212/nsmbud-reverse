#pragma once

#include "types.h"
#include "sead.h"

class ModelWrapper;

class DrawMgr
{
public:
    static DrawMgr* instance;

    void drawModel(ModelWrapper* model);
};
