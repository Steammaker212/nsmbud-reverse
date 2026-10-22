#pragma once

#include "types.h"
#include "sead.h"
#include "util/mtx34.h"

// Wraps a model file plus its animation slots.
class ModelWrapper
{
public:
    static ModelWrapper* create(const sead::SafeString& archiveName,
                                const sead::SafeString& modelName);

    void updateModel();
    void updateAnimations();
    void setMtx(const Mtx34& mtx);
    void setScale(const Vec3& scale);
};
