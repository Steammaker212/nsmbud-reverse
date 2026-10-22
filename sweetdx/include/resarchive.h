#pragma once

#include "types.h"
#include "sead.h"

// An archive of loaded resources (models, textures, ...). Opaque to mod code;
// you only ever hold pointers to these.
class ResArchive
{
public:
    void* getResource(const sead::SafeString& name);
    void  unload();
};
